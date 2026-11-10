/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178fa0; name: _INIT_1399
 */


void _INIT_1399(void)

{
  if ((DAT_0487c920 & 1) == 0) {
    DAT_0487c910 = 0;
    DAT_0487c918 = 0;
    DAT_0487c900 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c900;
    DAT_0487c908 = &DAT_04691cb8;
    DAT_0487c920 = 1;
  }
  return;
}


