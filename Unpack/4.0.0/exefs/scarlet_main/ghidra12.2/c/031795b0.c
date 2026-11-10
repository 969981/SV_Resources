/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031795b0; name: _INIT_1408
 */


void _INIT_1408(void)

{
  if ((DAT_0487ca88 & 1) == 0) {
    DAT_0487ca78 = 0;
    DAT_0487ca80 = 0;
    DAT_0487ca68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ca68;
    DAT_0487ca70 = &DAT_04692488;
    DAT_0487ca88 = 1;
  }
  return;
}


