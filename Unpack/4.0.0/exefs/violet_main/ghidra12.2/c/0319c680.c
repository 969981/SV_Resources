/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c680; name: _INIT_1538
 */


void _INIT_1538(void)

{
  if ((DAT_0487e808 & 1) == 0) {
    DAT_0487e7f8 = 0;
    DAT_0487e800 = 0;
    DAT_0487e7e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e7e8;
    DAT_0487e7f0 = &DAT_046a0740;
    DAT_0487e808 = 1;
  }
  return;
}


