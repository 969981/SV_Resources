/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03145f90; name: _INIT_881
 */


void _INIT_881(void)

{
  if ((DAT_04876b68 & 1) == 0) {
    DAT_04876b58 = 0;
    DAT_04876b60 = 0;
    DAT_04876b48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876b48;
    DAT_04876b50 = &DAT_04669ff0;
    DAT_04876b68 = 1;
  }
  return;
}


