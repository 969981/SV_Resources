/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c4f0; name: _INIT_1533
 */


void _INIT_1533(void)

{
  if ((DAT_0487e740 & 1) == 0) {
    DAT_0487e730 = 0;
    DAT_0487e738 = 0;
    DAT_0487e720 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e720;
    DAT_0487e728 = &DAT_046a0300;
    DAT_0487e740 = 1;
  }
  return;
}


