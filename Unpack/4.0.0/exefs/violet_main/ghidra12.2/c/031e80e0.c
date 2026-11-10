/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031e80e0; name: _INIT_1612
 */


void _INIT_1612(void)

{
  if ((DAT_04884878 & 1) == 0) {
    DAT_04884868 = 0;
    DAT_04884870 = 0;
    DAT_04884858 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884858;
    DAT_04884860 = &DAT_046a65e8;
    DAT_04884878 = 1;
  }
  return;
}


