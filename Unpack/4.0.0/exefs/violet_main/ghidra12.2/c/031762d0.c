/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031762d0; name: _INIT_1300
 */


void _INIT_1300(void)

{
  if ((DAT_0487b9a8 & 1) == 0) {
    DAT_0487b998 = 0;
    DAT_0487b9a0 = 0;
    DAT_0487b988 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b988;
    DAT_0487b990 = &DAT_0468b248;
    DAT_0487b9a8 = 1;
  }
  return;
}


