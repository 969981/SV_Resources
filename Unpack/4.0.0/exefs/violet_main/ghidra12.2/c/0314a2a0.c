/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a2a0; name: _INIT_1042
 */


void _INIT_1042(void)

{
  if ((DAT_04878490 & 1) == 0) {
    DAT_04878480 = 0;
    DAT_04878488 = 0;
    DAT_04878470 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878470;
    DAT_04878478 = &DAT_04673c08;
    DAT_04878490 = 1;
  }
  return;
}


