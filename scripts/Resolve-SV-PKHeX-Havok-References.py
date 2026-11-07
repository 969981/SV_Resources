#!/usr/bin/env python3
"""Read original Gen9 TRSCN FlatBuffers to enumerate dynamic Havok TRCOL.

Mimics PaldeaSceneModel: for each root scene object, inspect its first child
trinity_CollisionComponent, then CollisionComponent.Shape union; type Havok=4
points to Havok.TrcolFilePath. All offsets and buffers are bounds-checked.
Do not guess a TRCOL from filenames; only original schema fields are evidence.
"""
from __future__ import annotations
import argparse
from collections import defaultdict
import csv
import gzip
import hashlib
import json
from pathlib import Path
import struct

TRPFS = Path("Unpack/4.0.0/romfs/arc/data.trpfs")
TRPFD = Path("Unpack/4.0.0/romfs/arc/data.trpfd/_index")
NAME = "encounter-trcol-dependencies.json"


def sha256(p: Path) -> str:
    h=hashlib.sha256()
    with p.open("rb") as f:
        for block in iter(lambda:f.read(1024*1024),b""):
            h.update(block)
    return h.hexdigest().upper()


class FB:
    """Minimal read-only FlatBuffer accessor; nothing is interpreted if out of bounds."""
    def __init__(self, raw: bytes):
        self.raw=raw
        self.n=len(raw)
        if self.n<8:
            raise ValueError("FlatBuffer shorter than 8 bytes")

    def unpack(self,fmt: str,pos:int):
        size=struct.calcsize("<"+fmt)
        if not 0<=pos<=self.n-size:
            raise ValueError(f"FlatBuffer offset outside file at {pos} ({size})")
        return struct.unpack_from("<"+fmt,self.raw,pos)[0]

    def root(self):
        address=self.unpack("I",0)
        self.table(address)
        return address

    def table(self,ptr:int):
        offset=self.unpack("i",ptr)
        start=ptr-offset
        vlen=self.unpack("H",start)
        size=self.unpack("H",start+2)
        if vlen<4 or vlen%2 or not 0<=start<=self.n-vlen or not 4<=size<=self.n-ptr:
            raise ValueError(f"Bad FlatBuffer vtable at {ptr}")
        return start,vlen,size

    def field(self,table:int,index:int):
        start,vlen,obj_size=self.table(table)
        slot=4+2*index
        if slot+2>vlen:
            return None
        delta=self.unpack("H",start+slot)
        if delta==0:
            return None
        if delta>=obj_size:
            raise ValueError(f"Invalid field offset in table at {table}")
        return table+delta

    def ref(self,table:int,index:int):
        pos=self.field(table,index)
        if pos is None:
            return None
        dest=pos+self.unpack("I",pos)
        if not 0<=dest<self.n:
            raise ValueError("FlatBuffer relative reference outside file")
        return dest

    def string(self,table:int,index:int):
        p=self.ref(table,index)
        if p is None:
            return None
        n=self.unpack("I",p)
        if n>65536 or p+4+n>=self.n:
            raise ValueError("Invalid FlatBuffer string length")
        return self.raw[p+4:p+4+n].decode("utf-8","strict")

    def array(self,table:int,index:int,byte_array:bool=False):
        p=self.ref(table,index)
        if p is None:
            return [] if not byte_array else b""
        n=self.unpack("I",p)
        if byte_array:
            if n>64*1024*1024 or p+4+n>self.n:
                raise ValueError("Byte vector out of bounds")
            return self.raw[p+4:p+4+n]
        if n>1_000_000 or p+4+4*n>self.n:
            raise ValueError("Object vector out of bounds")
        return [pos+self.unpack("I",pos) for pos in range(p+4,p+4+n*4,4)]

    def u8(self,table:int,index:int):
        p=self.field(table,index)
        return self.unpack("B",p) if p is not None else 0


def decode_component(data:bytes):
    """Union hierarchy from TrinityComponent.fbs; return (kind, trcol_path)."""
    fb=FB(data)
    root=fb.root()
    kind=fb.u8(root,0)
    if kind!=1:  # ComponentUnion: 1 == CollisionComponent
        raise ValueError(f"Unexpected trinity_CollisionComponent union type {kind}")
    collision=fb.ref(root,1)
    if collision is None:
        raise ValueError("CollisionComponent union points to null")
    shape=fb.u8(collision,0)
    if shape not in (1,2,3,4):
        raise ValueError(f"Unknown collision shape discriminator {shape}")
    obj=fb.ref(collision,1)
    if obj is None:
        raise ValueError("Collision shape union has no body")
    if shape==4: # CollisionUnion Havok
        path=fb.string(obj,0)
        if not path:
            raise ValueError("Havok.TrcolFilePath missing from native scene")
        return "Havok",path
    return ("Box" if shape==2 else "Sphere" if shape==1 else "Capsule"),None


def scene_havok_references(raw:bytes):
    fb=FB(raw)
    root=fb.root()
    top=fb.array(root,4)   # TrinitySceneObjectTemplate.Objects
    counts={"scene_objects":len(top),"collision_objects":0,
            "havok_objects":0,"box_objects":0,"sphere_objects":0,"capsule_objects":0}
    havok=[]
    for index,scene_entry in enumerate(top):
        # Mirror pkNX PaldeaSceneModel.AddIfAppropriate: require first child
        children=fb.array(scene_entry,2)
        if not children:
            continue
        first=children[0]
        if fb.string(first,0)!="trinity_CollisionComponent":
            continue
        raw_component=fb.array(first,1,byte_array=True)
        if not raw_component:
            raise ValueError(f"Scene object {index} empty native collision payload")
        kind,path=decode_component(raw_component)
        counts["collision_objects"]+=1
        counts[kind.lower()+"_objects"]+=1
        if path is not None:
            havok.append({"scene_object_index":index,"trcol_path":path})
    return counts,havok


def normalize(path:str):
    if (not path or path.startswith("/") or "\\" in path or ":" in path
            or any(x in ("",".","..") for x in path.split("/"))):
        raise ValueError(f"Unsafe path from native collision schema: {path!r}")
    return path.lower()


def resolve(root:Path, descriptor:Path):
    plan_path=root/TRPFS/"_index/encounter-native-extraction.json"
    if not plan_path.is_file():
        raise FileNotFoundError("SHA-verified original 61 native asset extraction manifest absent")
    evidence=json.loads(plan_path.read_text("utf-8"))
    if evidence.get("status")!="61_NATIVE_TARGETS_EXTRACTED_SHA256_VERIFIED":
        raise ValueError("Cannot inspect unverified game source")
    scenes=[x for x in evidence["targets"] if x["expected"].endswith(".trscn")
            and x["expected"].count("resident_area_collision_")>=1]
    extra="world/scene/parts/field/room/a_w23_field/a_w23_field_area_col_/a_w23_field_area_col_0.trscn"
    scenes.extend(x for x in evidence["targets"] if x["expected"]==extra)
    if len(scenes)!=4 or len({x["source_virtual_path"] for x in scenes})!=4:
        raise ValueError("Exactly 4 confirmed native PKHeX region scenes required")
    resolved=[]
    counts=[]
    native_root=root/TRPFS/"virtual"
    for entry in scenes:
        name=entry["source_virtual_path"]
        source=(native_root/name).resolve()
        if not source.is_relative_to(native_root.resolve()) or not source.is_file():
            raise FileNotFoundError(f"Missing native scene {name}")
        if source.stat().st_size!=entry["native_bytes"] or sha256(source)!=entry["native_sha256"]:
            raise ValueError(f"Native TRSCN SHA256 mismatch: {name}")
        stat,links=scene_havok_references(source.read_bytes())
        counts.append({"source":name,**stat})
        for link in links:
            resolved.append({"source_scene":name,**link})
    by_name=defaultdict(list)
    with gzip.open(descriptor/"file_index.tsv.gz","rt",encoding="utf-8-sig",newline="") as f:
        for row in csv.DictReader(f,delimiter="\t"):
            if row["virtual_path"] and row["virtual_path"].lower().endswith(".trcol"):
                by_name[row["virtual_path"].lower()].append(row)
    packs=set()
    for ref in resolved:
        path=normalize(ref["trcol_path"])
        matches=by_name.get(path,[])
        ref["native_matches"]=[{"hash":r["hash"],"pack_index":int(r["pack_index"]),
                                "source_virtual_path":r["virtual_path"]}
                               for r in matches]
        ref["status"]=("FOUND_ONE_NATIVE_FILE" if len(matches)==1
                       else "MISSING_NATIVE_PATH" if not matches else "AMBIGUOUS_NATIVE_PATH")
        if len(matches)==1:
            packs.add(int(matches[0]["pack_index"]))
    missing=[x for x in resolved if x["status"]!="FOUND_ONE_NATIVE_FILE"]
    result={
        "schema_version":1,
        "source":"4.0.0-original-native-TRSCN-Havok-flatbuffer",
        "status":("RESOLVED_NATIVE_TRCOL_PACKS" if not missing else "BLOCKED_UNRESOLVED_NATIVE_TRCOL"),
        "native_collisions":counts,
        "havok_references":resolved,
        "unique_havok_paths":len({x["trcol_path"] for x in resolved}),
        "selected_pack_indices":sorted(packs),
        "unresolved_count":len(missing),
        "next_gate":"Extract & SHA-verify each native TRCOL before pkNX scene geometry joins",
    }
    return result


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument("--repo",type=Path,default=Path("."))
    p.add_argument("--index",type=Path,default=TRPFD)
    p.add_argument("--output",type=Path,default=TRPFS/"_index"/NAME)
    a=p.parse_args()
    report=resolve(a.repo.resolve(),(a.repo/a.index).resolve())
    out=(a.repo/a.output).resolve()
    if out.is_relative_to((a.repo/TRPFS/"virtual").resolve()):
        p.error("Never write generated evidence into the original native virtual folder")
    out.parent.mkdir(parents=True,exist_ok=True)
    out.write_text(json.dumps(report,ensure_ascii=False,indent=2)+"\n","utf-8")
    print(json.dumps({"status":report["status"],"scenes":len(report["native_collisions"]),
                      "havok_references":len(report["havok_references"]),
                      "unique_havok_paths":report["unique_havok_paths"],
                      "unresolved_count":report["unresolved_count"],
                      "selected_pack_indices":report["selected_pack_indices"]},indent=2))
    return 0 if report["unresolved_count"]==0 else 2


if __name__=="__main__":
    raise SystemExit(main())
