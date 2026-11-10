/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f230; name: _INIT_1238
 */


void _INIT_1238(void)

{
  if ((DAT_0487a330 & 1) == 0) {
    DAT_0487a320 = 0;
    DAT_0487a328 = 0;
    DAT_0487a310 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a310;
    DAT_0487a318 = &DAT_0467f888;
    DAT_0487a330 = 1;
  }
  return;
}


