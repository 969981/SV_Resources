"""SV R3/R4 object-level, SHA-based incremental pipeline.

Run from repository root: python scripts/resource_pipeline/r4_pipeline.py --help
The converter CLI is optional; a declared object alone is NEVER a model export.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
from pathlib import Path, PurePosixPath
import shlex
import shutil
import sqlite3
import subprocess
import sys
import tarfile
import tempfile

try:
    from . import cli, r3_objects as r3
except ImportError:
    import cli
    import r3_objects as r3

PIPELINE_VERSION="r4.1"
SOURCE_ROOT=Path("tools/PokeDocs/SV/Flatbuffers")
EXTS=set(r3.SCHEMAS) | {".bntx"}


def apply_schema(conn):
    ddl=Path(__file__).with_name("r4_schema.sql").read_text("utf-8")
    conn.executescript(ddl)


def tool_digest(repo):
    paths=[
        Path(__file__),Path(r3.__file__),
        repo/SOURCE_ROOT/"model/trmdl.fbs",
        repo/"tools/gftool/TrinityModelViewer/Export/GltfExporter.cs",
        repo/"tools/SV.R3.ModelExport/Program.cs"
    ]
    h=hashlib.sha256()
    for path in paths:
        if path.is_file():
            h.update(str(path.relative_to(repo) if path.is_relative_to(repo) else path.name).encode())
            h.update(cli.digest(path).encode())
        else:
            h.update(("MISSING:"+str(path)).encode())
    for ext,p in sorted(r3.SCHEMAS.items()):
        filename=repo/SOURCE_ROOT/p
        h.update(ext.encode())
        h.update(cli.digest(filename).encode() if filename.is_file() else b"MISSING")
    return h.hexdigest().upper()


def object_sources(conn,root,prefix="",discover=False):
    prefix=r3.checked_relative(prefix) if prefix else ""
    paths=set()
    for (name,) in conn.execute(
        "SELECT virtual_path FROM raw_files WHERE source_version=? "
        "AND available=1 AND extract_status='OK' AND virtual_path LIKE ?",
        (cli.VERSION, prefix+"%")):
        if name.lower().endswith(".trmdl"):
            paths.add(name)
    if discover:
        base=root/"virtual"
        if prefix:
            base=r3.local_source(base,prefix)
        if base.is_file():
            if base.suffix.lower()==".trmdl":
                paths.add(base.relative_to(root/"virtual").as_posix())
        elif base.exists():
            for file in base.rglob("*.trmdl"):
                if file.is_file() and not file.is_symlink():
                    paths.add(file.relative_to(root/"virtual").as_posix())
    return sorted(paths)


def known_inputs(conn,root,prefix,discover=False,indexed=None):
    # Indexed inventory is loaded once per run, not once per model.
    if indexed is None:
        indexed={row[0] for row in conn.execute(
            "SELECT virtual_path FROM raw_files WHERE "
            "source_version=? AND available=1 AND extract_status='OK'",
            (cli.VERSION,))}
    known = set(indexed) if discover else indexed
    if discover:
        parent=(root/"virtual"/PurePosixPath(prefix).parent)
        if parent.is_dir():
            for p in parent.rglob("*"):
                if p.is_file() and not p.is_symlink() and p.suffix.lower() in EXTS:
                    known.add(p.relative_to(root/"virtual").as_posix())
    return known


def file_sha(conn,path):
    if not path.is_file() or path.is_symlink():
        raise ValueError("Missing/unsafe input: "+str(path))
    st=path.stat()
    row=conn.execute("SELECT sha256 FROM r4_hash_cache WHERE path=? AND "
                     "size_bytes=? AND mtime_ns=?",(str(path),st.st_size,st.st_mtime_ns)).fetchone()
    if row:
        return row[0]
    sha=cli.digest(path)
    conn.execute("""INSERT INTO r4_hash_cache(path,size_bytes,mtime_ns,sha256)
                    VALUES(?,?,?,?)
                    ON CONFLICT(path) DO UPDATE SET size_bytes=excluded.size_bytes,
                    mtime_ns=excluded.mtime_ns,sha256=excluded.sha256""",
                 (str(path),st.st_size,st.st_mtime_ns,sha))
    return sha


def fingerprint(conn,root,graph,tool_sha,params):
    parts=[]
    for dep in sorted(graph["dependencies"],key=lambda x:x["path"]):
        # Hash every present input first time; stat cache makes later runs cheap.
        path=r3.local_source(root/"virtual",dep["path"])
        parts.append({"path":dep["path"],"required":dep["required"],
                      "sha256":file_sha(conn,path) if path.is_file() else None})
    raw=json.dumps({"version":PIPELINE_VERSION,"tool_sha256":tool_sha,
                    "inputs":parts,"params":params},sort_keys=True).encode("utf-8")
    return hashlib.sha256(raw).hexdigest().upper(),parts


def update_status(conn,name,fp,state,source_sha,report_path,reason=""):
    conn.execute("""INSERT INTO r4_object_jobs(object_name, fingerprint,status,
        input_sha256, report_path,error_message,attempts,updated_utc)
        VALUES(?,?,?,?,?,?,1,?)
        ON CONFLICT(object_name) DO UPDATE SET fingerprint=excluded.fingerprint,
          status=excluded.status,input_sha256=excluded.input_sha256,
          report_path=excluded.report_path,error_message=excluded.error_message,
          attempts=CASE WHEN r4_object_jobs.fingerprint=excluded.fingerprint
             THEN r4_object_jobs.attempts+1 ELSE 1 END,
          updated_utc=excluded.updated_utc""",
        (name,fp,state,source_sha,report_path,reason,cli.utcnow()))


def load_checkpoint(root):
    path=root/"_index"/"r4-checkpoint.json"
    if not path.is_file():
        return None
    obj=json.loads(path.read_text("utf-8"))
    return obj.get("last_object")


def save_checkpoint(root,name):
    cli.store_json(root/"_index"/"r4-checkpoint.json",
                   {"last_object":name,"pipeline_version":PIPELINE_VERSION,
                    "updated_utc":cli.utcnow()})


def converter_command(template,src,out):
    if not template:
        raise ValueError("No headless glTF exporter configured")
    if "{input}" not in template or "{output}" not in template:
        raise ValueError("--converter requires {input} and {output}")
    args=shlex.split(template,posix=(os.name!="nt"))
    return [p.replace("{input}",str(src)).replace("{output}",str(out))
            for p in args]


def verify_approval(file,name,fp,validated):
    a=json.loads(Path(file).read_text("utf-8"))
    if a.get("object")!=name or a.get("fingerprint")!=fp or \
       a.get("gltf_sha256")!=validated["gltf_sha256"]:
        raise ValueError("Review evidence does not match model/fingerprint/output")
    if not a.get("reviewer") or not a.get("evidence"):
        raise ValueError("Visual review must name reviewer and evidence")
    checks=a.get("checks",{})
    for key in ("materials","uv","lod","skeleton","animations"):
        if checks.get(key)!="PASS":
            raise ValueError("Unverified review item: "+key)
    if validated["visual"]!="NOT_REVIEWED":
        raise ValueError("Unexpected implicit visual approval")
    return a


def promote(root,name,fp,gltf_path,validation,approval_file):
    review=verify_approval(approval_file,name,fp,validation)
    # Output belongs to source-verified geometry, NOT proven game IDs.
    p=PurePosixPath(name)
    dest=root/"resources"/"geometry"/"source_verified"/p.parent/p.stem
    dest.mkdir(parents=True,exist_ok=True)
    paths=[gltf_path]+[gltf_path.parent/d["path"]
                       for d in validation["external_files"]]
    src_base=gltf_path.parent.resolve()
    written=[]
    for src in paths:
        if not src.resolve().is_relative_to(src_base):
            raise ValueError("External source escapes model output dir")
        if not src.is_file() or src.is_symlink():
            raise ValueError("Missing file to promote")
        rel=src.relative_to(gltf_path.parent)
        target=dest/rel
        target.parent.mkdir(parents=True,exist_ok=True)
        shutil.copy2(src,target)
        if cli.digest(src)!=cli.digest(target):
            raise ValueError("Promoted asset hash mismatch: "+str(rel))
        written.append(str(rel.as_posix()))
    cli.store_json(dest/"provenance.json",{
        "source":name,"fingerprint":fp,"status":"VISUAL_REVIEWED",
        "semantic_game_id":None,"identity_status":"UNKNOWN",
        "review":review,"validation":validation,"files":written})
    return dest


def process(root,conn,repo,*,prefix="",limit=0,resume=False,retry_failed=False,
            discover=False,converter="",converter_version="not-configured",
            approval_dir=None,approve=False,tool_sha=None):
    if approve and not approval_dir:
        raise ValueError("Cannot promote without --approval-dir")
    tool_sha=tool_sha or tool_digest(repo)
    sources=object_sources(conn,root,prefix,discover)
    last=load_checkpoint(root) if resume else None
    if last:
        if retry_failed:
            failed_set={name for (name,) in conn.execute(
                "SELECT object_name FROM r4_object_jobs "
                "WHERE status IN ('FAILED','BLOCKED')")}
            sources=[p for p in sources if p>last or p in failed_set]
        else:
            sources=[p for p in sources if p>last]
    indexed={row[0] for row in conn.execute(
        "SELECT virtual_path FROM raw_files WHERE "
        "source_version=? AND available=1 AND extract_status='OK'",
        (cli.VERSION,))}
    counts={"seen":0,"parsed":0,"converted":0,"promoted":0,
            "blocked":0,"failed":0,"skipped":0}
    errors=[]
    for name in sources:
        if limit and counts["seen"]>=limit:
            break
        counts["seen"]+=1
        report=root/"parsed"/PurePosixPath(name).parent/(PurePosixPath(name).name+".object.json")
        fp="UNRESOLVED"
        try:
            known=known_inputs(conn,root,name,discover,indexed=indexed)
            graph=r3.classify_model(name,root/"virtual",known)
            params={"converter":converter,"converter_version":converter_version,
                    "file_type":"gltf","promotion":bool(approve)}
            fp,inputs=fingerprint(conn,root,graph,tool_sha,params)
            graph.update({"fingerprint":fp,"pipeline_version":PIPELINE_VERSION,
                          "tool_sha256":tool_sha,"source_hashes":inputs})
            previous=conn.execute("SELECT status,fingerprint FROM r4_object_jobs "
                                  "WHERE object_name=?",(name,)).fetchone()
            gltf_path=root/"converted"/PurePosixPath(name).parent/(
                PurePosixPath(name).stem)/(PurePosixPath(name).stem+".gltf")
            if previous and previous[1]==fp and previous[0] in ("PROMOTED","STRUCTURE_PASS"):
                # Do not skip if the user deleted or corrupted the exported model.
                if gltf_path.is_file():
                    try:
                        r3.validate_gltf(gltf_path,
                            require_animations=any(d["role"]=="bone_animation" and
                                d["exists"] for d in graph["dependencies"]),
                            require_skin=bool(graph["model"]["skeleton"]),
                            require_lods=len(graph["model"]["meshes"]))
                        counts["skipped"]+=1
                        save_checkpoint(root,name)
                        continue
                    except (ValueError,OSError,TypeError,KeyError,IndexError):
                        pass
            if previous and previous[1]==fp and previous[0]=="BLOCKED" and not retry_failed:
                counts["skipped"]+=1
                save_checkpoint(root,name)
                continue
            if previous and previous[1]==fp and previous[0]=="FAILED" and not retry_failed:
                counts["skipped"]+=1
                save_checkpoint(root,name)
                continue
            cli.store_json(report,graph)
            if graph["missing_required"]:
                update_status(conn,name,fp,"BLOCKED",next((i["sha256"] for i in inputs if i["path"]==name),None),
                              cli.relative_safe(root,report),
                              "Missing declared dependencies: "+",".join(graph["missing_required"]))
                counts["blocked"]+=1
            elif not converter and not gltf_path.is_file():
                update_status(conn,name,fp,"BLOCKED",next((i["sha256"] for i in inputs if i["path"]==name),None),
                              cli.relative_safe(root,report),
                              "TRMDL parsed, glTF exporter unavailable; use gftool GUI or --converter.")
                counts["parsed"]+=1
                counts["blocked"]+=1
            else:
                if converter:
                    gltf_path.parent.mkdir(parents=True,exist_ok=True)
                    cmd=converter_command(converter,root/"virtual"/name,gltf_path)
                    result=subprocess.run(cmd,capture_output=True,text=True,timeout=600)
                    if result.returncode:
                        raise RuntimeError("Exporter failed: "+result.stderr[-1000:])
                anim=any(d["role"]=="bone_animation" and d["exists"]
                         for d in graph["dependencies"])
                skeleton=bool(graph["model"]["skeleton"])
                lods=len(graph["model"]["meshes"])
                quality=r3.validate_gltf(gltf_path,require_animations=anim,
                                         require_skin=skeleton,require_lods=lods)
                graph["gltf_validation"]=quality
                graph["quality"]["geometry"]="STRUCTURE_PASS"
                cli.store_json(report,graph)
                if approve:
                    approval=Path(approval_dir)/(hashlib.sha256(name.encode()).hexdigest()+".json")
                    output=promote(root,name,fp,gltf_path,quality,approval)
                    update_status(conn,name,fp,"PROMOTED",next((i["sha256"] for i in inputs if i["path"]==name),None),
                                  cli.relative_safe(root,report),
                                  cli.relative_safe(root,output))
                    counts["promoted"]+=1
                else:
                    update_status(conn,name,fp,"STRUCTURE_PASS",next((i["sha256"] for i in inputs if i["path"]==name),None),
                                  cli.relative_safe(root,report),
                                  "Visual review and verified game ID link remain pending")
                counts["converted"]+=1
            conn.executemany("""INSERT INTO r4_object_dependencies(
                  object_name,source_path,role,evidence,required,exists_local,sha256)
                  VALUES(?,?,?,?,?,?,?)
                  ON CONFLICT(object_name,source_path) DO UPDATE SET
                  role=excluded.role,evidence=excluded.evidence,
                  required=excluded.required,exists_local=excluded.exists_local,
                  sha256=excluded.sha256""",
                ((name,d["path"],d["role"],d["evidence"],
                  int(d["required"]),int(d["exists"]),
                  next((x["sha256"] for x in inputs if x["path"]==d["path"]),None))
                 for d in graph["dependencies"]))
            conn.commit()
        except Exception as exc:
            conn.rollback()
            update_status(conn,name,fp,"FAILED",None,
                          cli.relative_safe(root,report),str(exc)[:2000])
            conn.commit()
            errors.append({"source":name,"error":str(exc)[:500]})
            counts["failed"]+=1
        finally:
            save_checkpoint(root,name)
    result={"counts":counts,"pipeline_version":PIPELINE_VERSION,
            "tool_sha256":tool_sha,"prefix":prefix,
            "cursor":load_checkpoint(root),"issues":errors[:20]}
    cli.store_json(root/"_index"/"r4-last-run.json",result)
    return result


def pack_reports(root,out_dir,limit_mb=50):
    """Archive metadata (parsed JSON, index SQLite excluded), never native game assets."""
    cap=limit_mb*1024*1024
    if cap<1024:
        raise ValueError("Archive cap too small")
    targets=[p for p in (root/"parsed").rglob("*.object.json") if p.is_file()]
    targets.sort()
    out_dir.mkdir(parents=True,exist_ok=True)
    batches=[];chunk=[];size=0
    def flush():
        if not chunk:
            return
        dest=out_dir/("r3-manifests-"+str(len(batches)+1).zfill(4)+".tar.gz")
        with tarfile.open(dest,"w:gz") as tar:
            for x in chunk:
                tar.add(x,arcname=x.relative_to(root).as_posix(),recursive=False)
        batches.append({"file":dest.name,"count":len(chunk),
                        "sha256":cli.digest(dest),"bytes":dest.stat().st_size})
    for p in targets:
        if p.stat().st_size>cap:
            raise ValueError("Single manifest too large: "+str(p))
        if chunk and size+p.stat().st_size>cap:
            flush();chunk=[];size=0
        chunk.append(p);size+=p.stat().st_size
    flush()
    result={"archives":batches,"policy":"METADATA_ONLY",
            "no_game_assets":True}
    cli.store_json(out_dir/"r3-archive-index.json",result)
    return result


def main(argv=None):
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root",type=Path,help="Path to data.trpfs directory")
    parser.add_argument("--repo",type=Path)
    sub=parser.add_subparsers(dest="command",required=True)
    index=sub.add_parser("run",help="R3 object graph + R4 incremental conversions")
    index.add_argument("--prefix",default="",help="Virtual path prefix (no ..)")
    index.add_argument("--limit",type=int,default=0)
    index.add_argument("--resume",action="store_true")
    index.add_argument("--retry-failed",action="store_true",
                       help="Retry FAILED and BLOCKED objects")
    index.add_argument("--discover",action="store_true",
                       help="Allow local unindexed model files, e.g. test fixtures")
    index.add_argument("--converter",default="",help="Trusted headless model CLI with {input} {output}")
    index.add_argument("--converter-version",default="not-configured")
    index.add_argument("--approval-dir",type=Path)
    index.add_argument("--promote-reviewed",action="store_true")
    pack=sub.add_parser("pack-reports")
    pack.add_argument("--output",type=Path)
    pack.add_argument("--max-mb",type=int,default=50)
    options=parser.parse_args(argv)
    repo=(options.repo or Path(__file__).resolve().parents[2]).resolve()
    root=(options.root or repo/cli.BASE).resolve()
    if not (root/"virtual").is_dir() or not (root/"_index").is_dir():
        parser.error("Require existing virtual/ and _index/")
    if options.command=="run":
        with cli.connect(root/"_index"/"resource_catalog.sqlite") as conn:
            apply_schema(conn)
            result=process(root,conn,repo,prefix=options.prefix,limit=options.limit,
                           resume=options.resume,retry_failed=options.retry_failed,
                           discover=options.discover,converter=options.converter,
                           converter_version=options.converter_version,
                           approval_dir=options.approval_dir,
                           approve=options.promote_reviewed)
    else:
        result=pack_reports(root,(options.output or root/"_index"/"r4-archives").resolve(),
                            options.max_mb)
    print(json.dumps(result,ensure_ascii=False,indent=2))
    return 2 if result.get("counts",{}).get("failed",0) else 0

if __name__=="__main__":
    sys.exit(main())
