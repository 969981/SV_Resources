/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317b210; name: _INIT_1436
 */


void _INIT_1436(void)

{
  if ((DAT_0487cee8 & 1) == 0) {
    DAT_0487ced8 = 0;
    DAT_0487cee0 = 0;
    DAT_0487cec8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cec8;
    DAT_0487ced0 = &DAT_04693d78;
    DAT_0487cee8 = 1;
  }
  return;
}


