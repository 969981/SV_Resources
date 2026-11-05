# BNTX (Nintendo Switch texture container)

## Native examples

- virtual/appli/tex/icon_item/item_0001/item_0001.bntx
- virtual/appli/tex/icon_ribbon/icon_ribbon_001/icon_ribbon_001.bntx
- virtual/pokemon/data/pm0025/pm0025_00_00/icon/pm0025_00_00_00.bntx

## Header observations from original 4.0.0

- Offset 0x00: ASCII BNTX
- Offset 0x0C: byte-order marker (observed FF FE in little-endian files)
- Offset 0x1C: declared container size
- BRTI texture records: format code and dimensions; must check bounds.
- Example icon_ribbon_001.bntx: 20,584 bytes; BRTI at 0x1F8,
  format code 0x2001, width=128 and height=128 (header observation).

The R1 script reads conservative metadata only. BRTI presence and container
size consistency do NOT prove the texture has been correctly deswizzled,
decompressed, or exported. For PNG conversion the backend must correctly
handle Switch block-linear/swizzling and compressed formats, including BC7
where applicable. Validate every output PNG signature, dimensions, alpha and
sample pixels against a known viewer before promoting completeness.

## Steps

1. Run scan; confirm BNTX magic, local file presence and source SHA.
2. Run convert-r1 --kind bntx to create parsed metadata.
3. Provide a tested BNTX converter executable using --converter.
4. Inspect PNG dimensions/alpha/visual result; then add semantic IDs separately.

Tools available for further work: tools/Switch-Toolbox and tools/gftool.
No verified command-line converter is claimed to exist in the vendor tree.
