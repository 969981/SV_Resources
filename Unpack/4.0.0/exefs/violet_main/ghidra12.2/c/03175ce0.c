/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03175ce0; name: _INIT_1281
 */


void _INIT_1281(void)

{
  if ((DAT_0487b6b0 & 1) == 0) {
    DAT_0487b6a0 = 0;
    DAT_0487b6a8 = 0;
    DAT_0487b690 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b690;
    DAT_0487b698 = &DAT_04689b70;
    DAT_0487b6b0 = 1;
  }
  return;
}


