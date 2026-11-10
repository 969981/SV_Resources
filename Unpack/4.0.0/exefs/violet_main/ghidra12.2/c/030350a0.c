/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030350a0; name: _INIT_735
 */


void _INIT_735(void)

{
  if ((DAT_04872338 & 1) == 0) {
    DAT_04872328 = 0;
    DAT_04872330 = 0;
    DAT_04872318 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872318;
    DAT_04872320 = &DAT_04646300;
    DAT_04872338 = 1;
  }
  return;
}


