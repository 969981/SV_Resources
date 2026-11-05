"""Exercise a real Scarlet/Violet BC7 BNTX file through the pinned Rust decoder."""
from pathlib import Path
import hashlib
import json
import shutil
import struct
import sys
import tempfile

REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0,str(REPO))
from scripts.resource_pipeline import cli

SOURCE = REPO / ("Unpack/4.0.0/romfs/arc/data.trpfs/virtual/appli/tex/"
                 "icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx")


def run():
    if not SOURCE.is_file():
        raise RuntimeError("Missing actual native BNTX fixture from repository")
    if shutil.which("ultimate_tex_cli") is None:
        raise RuntimeError("ultimate_tex_cli must be installed on PATH first")
    with tempfile.TemporaryDirectory() as name:
        root = Path(name)/"data.trpfs"
        rel = "appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx"
        dest = root/"virtual"/rel
        dest.parent.mkdir(parents=True)
        shutil.copyfile(SOURCE,dest)
        ix = root/"_index"
        ix.mkdir()
        src_sha = hashlib.sha256(dest.read_bytes()).hexdigest().upper()
        ix.joinpath("export.jsonl").write_text(json.dumps({
            "Status":"OK","Hash":"1111111111111111","Name":rel,
            "Size":dest.stat().st_size,"Sha256":src_sha,
            "PackName":"fixture.trpak","PackOffset":0
        })+"\n", encoding="utf-8")
        with cli.connect(ix/"resource_catalog.sqlite") as conn:
            summary=cli.scan(root,conn,verify=True)
            assert summary["records_scanned"] == 1, summary
            convert=cli.convert(root,conn,"bntx",0,
                                "ultimate_tex_cli {input} {output}")
            assert convert["ok"] == 1, convert
            out=root/"converted/appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.png"
            assert cli.valid_png(out)
            png=out.read_bytes()
            w,h=struct.unpack_from(">II",png,16)
            assert (w,h)==(128,128), (w,h)
            print(json.dumps({"sample":"icon_ribbon_001.bntx",
                "format":"BC7_UNORM", "png_dimensions":[w,h],
                "input_sha256":src_sha,"output_sha256":hashlib.sha256(png).hexdigest().upper(),
                "output_size":len(png)},indent=2))

if __name__=="__main__":
    run()
