/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314f280; name: _INIT_1239
 */


void _INIT_1239(void)

{
  if ((DAT_0487a358 & 1) == 0) {
    DAT_0487a348 = 0;
    DAT_0487a350 = 0;
    DAT_0487a338 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a338;
    DAT_0487a340 = &DAT_0467f948;
    DAT_0487a358 = 1;
  }
  return;
}


