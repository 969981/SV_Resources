/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c450; name: _INIT_1531
 */


void _INIT_1531(void)

{
  if ((DAT_0487e6f0 & 1) == 0) {
    DAT_0487e6e0 = 0;
    DAT_0487e6e8 = 0;
    DAT_0487e6d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e6d0;
    DAT_0487e6d8 = &DAT_046a00a8;
    DAT_0487e6f0 = 1;
  }
  return;
}


