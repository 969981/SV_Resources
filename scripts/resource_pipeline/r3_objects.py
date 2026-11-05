"""R3: read-only SV Trinity model dependency recovery and glTF output gates.

No original .trmdl/.trmsh/.tranm bytes are modified. A model graph is
not a reconstructed mesh, and a structurally valid glTF is NOT visual proof.
"""
from __future__ import annotations

import hashlib
import json
from pathlib import Path, PurePosixPath
import struct

MODEL_EXTENSIONS = {
    ".trmdl": "model", ".trmsh": "mesh", ".trmbf": "vertex_index_buffers",
    ".trmtr": "material_parameters", ".trmmt": "material_mapping",
    ".trskl": "skeleton", ".tranm": "bone_animation",
    ".tracm": "material_animation", ".bntx": "texture"
}

SCHEMAS = {
    ".trmdl": "model/trmdl.fbs",
    ".trmsh": "model/trmsh.fbs",
    ".trmbf": "model/trmbf.fbs",
    ".trmtr": "model/trmtr.fbs",
    ".trmmt": "model/trmmt.fbs",
    ".trskl": "model/trskl.fbs",
    ".tranm": "animation/tranm.fbs",
    ".tracm": "animation/tracm.fbs",
}

class FlatBuffer:
    """Bounds-checked reader for the small verified TRMDL manifest schema.

    This is NOT a general Trinity mesh decoder.
    """
    def __init__(self, raw):
        self.b = raw
        self.root = self.u32(0)
        if not 4 <= self.root < len(raw)-4:
            raise ValueError("FlatBuffer root offset out of range")
        self.vtable(self.root)

    def span(self, start, length):
        if start < 0 or length < 0 or start + length > len(self.b):
            raise ValueError(f"FlatBuffer out-of-bounds: {start}+{length}")
        return self.b[start:start+length]

    def u16(self, x):
        return struct.unpack("<H", self.span(x,2))[0]

    def u32(self,x):
        return struct.unpack("<I",self.span(x,4))[0]

    def i32(self,x):
        return struct.unpack("<i",self.span(x,4))[0]

    def vtable(self, table):
        v = table-self.i32(table)
        length=self.u16(v)
        object_size=self.u16(v+2)
        if length<4 or length%2 or length>256 or object_size<4:
            raise ValueError("Invalid FlatBuffer vtable")
        self.span(v,length)
        self.span(table,object_size)
        return v,length

    def field(self,table,slot):
        v,length=self.vtable(table)
        p=v+4+slot*2
        if p+2>v+length:
            return None
        offset=self.u16(p)
        if not offset:
            return None
        if offset>=len(self.b)-table:
            raise ValueError("Invalid FlatBuffer field offset")
        return table+offset

    def indirect(self,p):
        q=p+self.u32(p)
        self.span(q,4)
        return q

    def text(self,p):
        if p is None:
            return None
        q=self.indirect(p)
        length=self.u32(q)
        if length>1048576:
            raise ValueError("Unreasonable FlatBuffer string length")
        raw=self.span(q+4,length)
        return raw.decode("utf-8","strict")

    def table(self,p):
        return self.indirect(p) if p is not None else None

    def vector(self,p,as_type):
        if p is None:
            return []
        q=self.indirect(p)
        n=self.u32(q)
        if n>100000:
            raise ValueError("Unreasonable FlatBuffer vector count")
        self.span(q+4,n*4)
        out=[]
        for i in range(n):
            val=q+4+4*i
            if as_type=="table":
                out.append(self.table(val))
            elif as_type=="string":
                out.append(self.text(val))
            elif as_type=="uint32":
                out.append(self.u32(val))
            else:
                raise ValueError("Unsupported vector type")
        return out

def parse_trmdl(blob):
    """Reconstruct references defined by pinned PokeDocs model/trmdl.fbs."""
    f=FlatBuffer(blob)
    t=f.root
    meshes=[f.text(f.field(x,0)) for x in f.vector(f.field(t,1),"table")]
    skeleton=f.table(f.field(t,2))
    skeleton_name=f.text(f.field(skeleton,0)) if skeleton is not None else None
    materials=f.vector(f.field(t,3),"string")
    lods=[]
    for x in f.vector(f.field(t,4),"table"):
        lods.append({
            "kind":f.text(f.field(x,1)),
            "indices":f.vector(f.field(x,0),"uint32"),
        })
    # Bounds are inline two vec3 structs. Metadata only; no coordinate conversion.
    bounds=None
    b=f.field(t,5)
    if b is not None:
        bounds={"min":list(struct.unpack("<3f",f.span(b,12))),
                "max":list(struct.unpack("<3f",f.span(b+12,12)))}
    result={"meshes":meshes,"skeleton":skeleton_name,"materials":materials,
            "lods":lods,"bounds":bounds,"trltt":f.text(f.field(t,7))}
    if not meshes or any(not name or not name.endswith(".trmsh") for name in meshes):
        raise ValueError("TRMDL contains no validated .trmsh references")
    return result

def checked_relative(raw):
    if not isinstance(raw,str) or not raw or "\\" in raw or "\0" in raw:
        raise ValueError("Unsafe reference")
    p=PurePosixPath(raw)
    if p.is_absolute() or any(x in ("","..",".") for x in raw.split("/")):
        raise ValueError(f"Unsafe reference: {raw}")
    return str(p)

def local_source(virtual_root, relative):
    p=virtual_root / checked_relative(relative)
    if not p.resolve().is_relative_to(virtual_root.resolve()):
        raise ValueError("Reference escapes virtual root")
    return p


def parse_trmsh_buffer(blob):
    """Read explicit TRMSH.buffer_name: PokeDocs model/trmsh.fbs, slot 2."""
    f=FlatBuffer(blob)
    value=f.text(f.field(f.root,2))
    if not value or not value.lower().endswith(".trmbf"):
        raise ValueError("TRMSH has no validated vertex/index buffer reference")
    return checked_relative(value)


def declared_dependencies(model_rel, info, available, virtual_root=None):
    """Parse actual declared paths; companion suffixes are separately tagged inferred."""
    model_rel=checked_relative(model_rel)
    parent=PurePosixPath(model_rel).parent
    deps=[{"path":model_rel,"role":"descriptor","evidence":"SELF","required":True}]
    def add(name,role,evidence,required=True):
        name=checked_relative(name)
        dep=checked_relative(str(parent / name)) if "/" not in name else name
        if not any(x["path"]==dep for x in deps):
            deps.append({"path":dep,"role":role,"evidence":evidence,"required":required})
    for name in info["meshes"]:
        add(name,"mesh","TRMDL")
        # TRMSH field 2 explicitly names the TRMBF file. Check native bytes.
        if virtual_root is not None:
            mesh_rel=checked_relative(str(parent/name)) if "/" not in name else name
            mesh_file=local_source(virtual_root,mesh_rel)
            if mesh_file.is_file():
                buffer_name=parse_trmsh_buffer(mesh_file.read_bytes())
                add(buffer_name,"vertex_index_buffers","TRMSH")
    if info.get("skeleton"):
        add(info["skeleton"],"skeleton","TRMDL")
    for name in info["materials"]:
        add(name,"material_parameters","TRMDL")
    stem=PurePosixPath(model_rel).stem
    for ext,role in [(".trmmt","material_mapping"),(".tranm","bone_animation"),
                     (".tracm","material_animation"),(".bntx","texture")]:
        # Include same object prefix from folder; for Pokemon there are hundreds
        # of motions and textures. They remain candidates until runtime refs bind.
        prefix=str(parent / stem)
        candidates=(x for x in available if x.startswith(prefix)
                    and x.endswith(ext))
        for x in sorted(candidates):
            if x!=model_rel and x not in {d["path"] for d in deps}:
                deps.append({"path":x,"role":role,"evidence":"PREFIX_CANDIDATE",
                             "required":False})
    return deps

def classify_model(model_rel,source_dir,known_files):
    source=local_source(source_dir,model_rel)
    if not source.is_file():
        raise FileNotFoundError(str(source))
    info=parse_trmdl(source.read_bytes())
    deps=declared_dependencies(model_rel,info,known_files,source_dir)
    for dep in deps:
        p=local_source(source_dir,dep["path"])
        dep["exists"]=p.is_file()
        dep["size_bytes"]=p.stat().st_size if p.is_file() else None
    missing=[d["path"] for d in deps if d["required"] and not d["exists"]]
    return {
        "source":model_rel,
        "model":info,
        "dependencies":deps,
        "missing_required":missing,
        "structural_status":"COMPLETE_REFERENCES" if not missing else "MISSING_REFERENCES",
        "quality":{
            "geometry": "NOT_EXPORTED",
            "materials": "UNVERIFIED",
            "uv": "UNVERIFIED",
            "lod": "UNVERIFIED",
            "skeleton": "UNVERIFIED",
            "animations": "UNVERIFIED"
        },
        "semantic_id":None,
        "identity_status":"UNKNOWN"
    }

def _referenced(doc,index,key,collection):
    if not isinstance(index,int) or not 0<=index<len(doc.get(collection,[])):
        raise ValueError(f"Invalid glTF {key} reference into {collection}: {index}")
    return doc[collection][index]

def validate_gltf(out_path, *, require_animations=False, require_skin=False,
                  require_lods=0):
    """Static, dependency-aware glTF 2.0 verification (not a visual review)."""
    path=Path(out_path)
    if path.suffix.lower()!=".gltf" or not path.is_file():
        raise ValueError("Expected an existing .gltf file")
    doc=json.loads(path.read_text("utf-8"))
    if doc.get("asset",{}).get("version")!="2.0":
        raise ValueError("Not glTF 2.0")
    nodes=doc.get("nodes",[])
    meshes=doc.get("meshes",[])
    accessors=doc.get("accessors",[])
    mats=doc.get("materials",[])
    if not meshes or not nodes:
        raise ValueError("glTF model lacks nodes/meshes")
    if require_lods and len(meshes)<require_lods:
        raise ValueError(f"LOD requirement has {require_lods} meshes but {len(meshes)} exported")
    uv_primitive_count=0
    primitives=0
    for mesh in meshes:
        if not mesh.get("primitives"):
            raise ValueError("glTF mesh has no primitives")
        for prim in mesh["primitives"]:
            primitives+=1
            attrs=prim.get("attributes",{})
            _referenced(doc,attrs.get("POSITION"),"POSITION","accessors")
            if "indices" in prim:
                _referenced(doc,prim["indices"],"indices","accessors")
            if "material" in prim:
                if not isinstance(prim["material"],int) or not 0<=prim["material"]<len(mats):
                    raise ValueError("Invalid material reference")
            if "TEXCOORD_0" in attrs:
                _referenced(doc,attrs["TEXCOORD_0"],"TEXCOORD_0","accessors")
                uv_primitive_count+=1
    if mats and not any("material" in p for m in meshes for p in m["primitives"]):
        raise ValueError("Declared materials but no mesh material assignments")
    for node in nodes:
        if "mesh" in node:
            _referenced(doc,node["mesh"],"node.mesh","meshes")
        if "skin" in node:
            _referenced(doc,node["skin"],"node.skin","skins")
        for child in node.get("children",[]):
            _referenced(doc,child,"node.children","nodes")
    skins=doc.get("skins",[])
    for skin in skins:
        if not skin.get("joints"):
            raise ValueError("Empty glTF skin")
        for j in skin["joints"]:
            _referenced(doc,j,"skin.joint","nodes")
        if "inverseBindMatrices" in skin:
            acc=_referenced(doc,skin["inverseBindMatrices"],"inverseBindMatrices","accessors")
            if acc.get("type")!="MAT4":
                raise ValueError("Non-MAT4 inverse bind")
    if require_skin and not skins:
        raise ValueError("Missing required skeleton")
    animations=doc.get("animations",[])
    for anim in animations:
        for channel in anim.get("channels",[]):
            _referenced({"samplers":anim.get("samplers",[])},
                        channel.get("sampler"),"animation sampler","samplers")
            _referenced(doc,channel.get("target",{}).get("node"),"animation node","nodes")
    if require_animations and not animations:
        raise ValueError("Missing required animations")
    file_deps=[]
    for kind in ("buffers","images"):
        for x in doc.get(kind,[]):
            uri=x.get("uri")
            if uri is None:
                continue
            if not isinstance(uri,str) or uri.startswith("data:"):
                if isinstance(uri,str) and uri.startswith("data:"):
                    continue
                raise ValueError("Unresolved embedded resource URI")
            rel=checked_relative(uri)
            candidate=(path.parent/rel).resolve()
            if not candidate.is_relative_to(path.parent.resolve()) or not candidate.is_file():
                raise ValueError("Missing/unsafe external glTF resource: "+uri)
            if kind=="buffers" and candidate.stat().st_size<x.get("byteLength",0):
                raise ValueError("Truncated buffer: "+uri)
            file_deps.append({"path":rel,"bytes":candidate.stat().st_size,
                              "sha256":hashlib.sha256(candidate.read_bytes()).hexdigest().upper()})
    if any(m.get("pbrMetallicRoughness",{}).get("baseColorTexture") for m in mats) and not uv_primitive_count:
        raise ValueError("Textured materials without UV0")
    return {
        "structure":"PASS","visual":"NOT_REVIEWED",
        "mesh_count":len(meshes),"primitive_count":primitives,
        "materials_count":len(mats),"uv_primitive_count":uv_primitive_count,
        "skin_count":len(skins),"animation_count":len(animations),
        "external_files":file_deps,
        "gltf_sha256":hashlib.sha256(path.read_bytes()).hexdigest().upper()
    }
