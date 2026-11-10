/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034d30; name: _INIT_724
 */


void _INIT_724(void)

{
  if ((DAT_04872180 & 1) == 0) {
    DAT_04872170 = 0;
    DAT_04872178 = 0;
    DAT_04872160 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872160;
    DAT_04872168 = &DAT_04645958;
    DAT_04872180 = 1;
  }
  return;
}


