/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ef30; name: _INIT_1233
 */


void _INIT_1233(void)

{
  if ((DAT_0487a268 & 1) == 0) {
    DAT_0487a258 = 0;
    DAT_0487a260 = 0;
    DAT_0487a248 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a248;
    DAT_0487a250 = &DAT_0467f3f0;
    DAT_0487a268 = 1;
  }
  return;
}


