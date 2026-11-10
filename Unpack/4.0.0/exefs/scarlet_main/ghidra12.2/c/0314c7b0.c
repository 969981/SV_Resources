/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c7b0; name: _INIT_1116
 */


void _INIT_1116(void)

{
  if ((DAT_04879020 & 1) == 0) {
    DAT_04879010 = 0;
    DAT_04879018 = 0;
    DAT_04879000 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879000;
    DAT_04879008 = &DAT_04677e08;
    DAT_04879020 = 1;
  }
  return;
}


