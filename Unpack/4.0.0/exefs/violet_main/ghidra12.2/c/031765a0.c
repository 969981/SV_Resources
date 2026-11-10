/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031765a0; name: _INIT_1309
 */


void _INIT_1309(void)

{
  if ((DAT_0487bb10 & 1) == 0) {
    DAT_0487bb00 = 0;
    DAT_0487bb08 = 0;
    DAT_0487baf0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487baf0;
    DAT_0487baf8 = &DAT_0468bce8;
    DAT_0487bb10 = 1;
  }
  return;
}


