/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0319c1d0; name: _INIT_1523
 */


void _INIT_1523(void)

{
  if ((DAT_0487e5b0 & 1) == 0) {
    DAT_0487e5a0 = 0;
    DAT_0487e5a8 = 0;
    DAT_0487e590 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e590;
    DAT_0487e598 = &DAT_0469f618;
    DAT_0487e5b0 = 1;
  }
  return;
}


