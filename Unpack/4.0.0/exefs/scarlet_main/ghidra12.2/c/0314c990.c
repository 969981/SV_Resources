/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c990; name: _INIT_1122
 */


void _INIT_1122(void)

{
  if ((DAT_04879110 & 1) == 0) {
    DAT_04879100 = 0;
    DAT_04879108 = 0;
    DAT_048790f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048790f0;
    DAT_048790f8 = &DAT_04678428;
    DAT_04879110 = 1;
  }
  return;
}


