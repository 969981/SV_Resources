/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f960; name: _INIT_1261
 */


void _INIT_1261(void)

{
  if ((DAT_0487a6c8 & 1) == 0) {
    DAT_0487a6b8 = 0;
    DAT_0487a6c0 = 0;
    DAT_0487a6a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a6a8;
    DAT_0487a6b0 = &DAT_04680bd8;
    DAT_0487a6c8 = 1;
  }
  return;
}


