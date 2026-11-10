/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179f90; name: _INIT_1416
 */


void _INIT_1416(void)

{
  if ((DAT_0487cbc8 & 1) == 0) {
    DAT_0487cbb8 = 0;
    DAT_0487cbc0 = 0;
    DAT_0487cba8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cba8;
    DAT_0487cbb0 = &DAT_04692b98;
    DAT_0487cbc8 = 1;
  }
  return;
}


