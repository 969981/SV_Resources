/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314e710; name: _INIT_1207
 */


void _INIT_1207(void)

{
  if ((DAT_04879e58 & 1) == 0) {
    DAT_04879e48 = 0;
    DAT_04879e50 = 0;
    DAT_04879e38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879e38;
    DAT_04879e40 = &DAT_0467d7f0;
    DAT_04879e58 = 1;
  }
  return;
}


