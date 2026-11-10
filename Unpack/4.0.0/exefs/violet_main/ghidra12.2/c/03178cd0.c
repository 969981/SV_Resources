/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178cd0; name: _INIT_1390
 */


void _INIT_1390(void)

{
  if ((DAT_0487c7b8 & 1) == 0) {
    DAT_0487c7a8 = 0;
    DAT_0487c7b0 = 0;
    DAT_0487c798 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c798;
    DAT_0487c7a0 = &DAT_04691148;
    DAT_0487c7b8 = 1;
  }
  return;
}


