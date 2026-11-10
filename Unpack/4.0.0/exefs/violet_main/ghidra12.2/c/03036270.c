/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036270; name: _INIT_792
 */


void _INIT_792(void)

{
  if ((DAT_04872c20 & 1) == 0) {
    DAT_04872c10 = 0;
    DAT_04872c18 = 0;
    DAT_04872c00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872c00;
    DAT_04872c08 = &DAT_04649ed8;
    DAT_04872c20 = 1;
  }
  return;
}


