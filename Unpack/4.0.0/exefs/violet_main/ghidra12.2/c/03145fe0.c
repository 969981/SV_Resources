/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03145fe0; name: _INIT_882
 */


void _INIT_882(void)

{
  if ((DAT_04876b90 & 1) == 0) {
    DAT_04876b80 = 0;
    DAT_04876b88 = 0;
    DAT_04876b70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876b70;
    DAT_04876b78 = &DAT_0466a038;
    DAT_04876b90 = 1;
  }
  return;
}


