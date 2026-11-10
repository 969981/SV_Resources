/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031763c0; name: _INIT_1303
 */


void _INIT_1303(void)

{
  if ((DAT_0487ba20 & 1) == 0) {
    DAT_0487ba10 = 0;
    DAT_0487ba18 = 0;
    DAT_0487ba00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ba00;
    DAT_0487ba08 = &DAT_0468b548;
    DAT_0487ba20 = 1;
  }
  return;
}


