/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036860; name: _INIT_811
 */


void _INIT_811(void)

{
  if ((DAT_04872f18 & 1) == 0) {
    DAT_04872f08 = 0;
    DAT_04872f10 = 0;
    DAT_04872ef8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872ef8;
    DAT_04872f00 = &DAT_0464b280;
    DAT_04872f18 = 1;
  }
  return;
}


