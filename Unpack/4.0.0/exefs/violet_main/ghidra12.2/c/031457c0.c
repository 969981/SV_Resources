/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031457c0; name: _INIT_856
 */


void _INIT_856(void)

{
  if ((DAT_04876780 & 1) == 0) {
    DAT_04876770 = 0;
    DAT_04876778 = 0;
    DAT_04876760 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876760;
    DAT_04876768 = &DAT_04668830;
    DAT_04876780 = 1;
  }
  return;
}


