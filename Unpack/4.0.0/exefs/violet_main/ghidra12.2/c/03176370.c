/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176370; name: _INIT_1302
 */


void _INIT_1302(void)

{
  if ((DAT_0487b9f8 & 1) == 0) {
    DAT_0487b9e8 = 0;
    DAT_0487b9f0 = 0;
    DAT_0487b9d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b9d8;
    DAT_0487b9e0 = &DAT_0468b428;
    DAT_0487b9f8 = 1;
  }
  return;
}


