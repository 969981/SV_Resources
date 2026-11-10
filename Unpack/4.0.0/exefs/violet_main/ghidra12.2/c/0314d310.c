/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d310; name: _INIT_1143
 */


void _INIT_1143(void)

{
  if ((DAT_04879458 & 1) == 0) {
    DAT_04879448 = 0;
    DAT_04879450 = 0;
    DAT_04879438 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879438;
    DAT_04879440 = &DAT_04679858;
    DAT_04879458 = 1;
  }
  return;
}


