/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036360; name: _INIT_795
 */


void _INIT_795(void)

{
  if ((DAT_04872c98 & 1) == 0) {
    DAT_04872c88 = 0;
    DAT_04872c90 = 0;
    DAT_04872c78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872c78;
    DAT_04872c80 = &DAT_0464a0b8;
    DAT_04872c98 = 1;
  }
  return;
}


