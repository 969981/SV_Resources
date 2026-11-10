/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175a60; name: _INIT_1273
 */


void _INIT_1273(void)

{
  if ((DAT_0487b570 & 1) == 0) {
    DAT_0487b560 = 0;
    DAT_0487b568 = 0;
    DAT_0487b550 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b550;
    DAT_0487b558 = &DAT_046892b0;
    DAT_0487b570 = 1;
  }
  return;
}


