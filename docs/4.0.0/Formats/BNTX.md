# BNTX to PNG conversion

Native source examples:
- virtual/appli/tex/icon_item/item_0001/item_0001.bntx
- virtual/appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx
- virtual/pokemon/data/pm0025/pm0025_00_00/icon/pm0025_00_00_00.bntx

Confirmed ribbon sample has BNTX magic and BRTI at offset 0x1F8:
format 0x2001 = BC7 UNORM, dimensions 128 x 128.

The implementation uses the maintained ultimate_tex_cli decoder
at pinned source revision 2ef4f0904f85d696650bdefa1f18c935a09159ac.
Build with:

    cargo install --locked --git https://github.com/ScanMountGoat/ultimate_tex --rev 2ef4f0904f85d696650bdefa1f18c935a09159ac ultimate_tex_cli

Then run:

    python scripts/resource_pipeline/cli.py scan
    python scripts/resource_pipeline/cli.py convert-r1 --kind bntx

The CLI is auto-detected from PATH. Single-texture BNTX files export PNG
under converted/ at the same relative file path. Files with multiple BRTI
textures are marked BLOCKED until a multi-image adapter is implemented.
PNG header and dimensions are validated before marking OK.

Native binary-to-PNG integration CI:
.github/workflows/verify-sv-bntx-png.yml

This is a format conversion, not evidence that the filename's numeric
suffix equals the official game item or ribbon ID.
