/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a6b0; name: _INIT_1048
 */


void _INIT_1048(void)

{
  if ((DAT_04878580 & 1) == 0) {
    DAT_04878570 = 0;
    DAT_04878578 = 0;
    DAT_04878560 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878560;
    DAT_04878568 = &DAT_04674138;
    DAT_04878580 = 1;
  }
  return;
}


