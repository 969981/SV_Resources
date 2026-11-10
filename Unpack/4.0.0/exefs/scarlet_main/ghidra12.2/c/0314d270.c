/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d270; name: _INIT_1141
 */


void _INIT_1141(void)

{
  if ((DAT_04879408 & 1) == 0) {
    DAT_048793f8 = 0;
    DAT_04879400 = 0;
    DAT_048793e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048793e8;
    DAT_048793f0 = &DAT_04679678;
    DAT_04879408 = 1;
  }
  return;
}


