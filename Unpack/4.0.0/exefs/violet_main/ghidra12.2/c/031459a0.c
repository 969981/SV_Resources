/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031459a0; name: _INIT_862
 */


void _INIT_862(void)

{
  if ((DAT_04876870 & 1) == 0) {
    DAT_04876860 = 0;
    DAT_04876868 = 0;
    DAT_04876850 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876850;
    DAT_04876858 = &DAT_04668e80;
    DAT_04876870 = 1;
  }
  return;
}


