/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ec60; name: _INIT_1224
 */


void _INIT_1224(void)

{
  if ((DAT_0487a100 & 1) == 0) {
    DAT_0487a0f0 = 0;
    DAT_0487a0f8 = 0;
    DAT_0487a0e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a0e0;
    DAT_0487a0e8 = &DAT_0467e918;
    DAT_0487a100 = 1;
  }
  return;
}


