/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314afd0; name: _INIT_1072
 */


void _INIT_1072(void)

{
  if ((DAT_04878940 & 1) == 0) {
    DAT_04878930 = 0;
    DAT_04878938 = 0;
    DAT_04878920 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878920;
    DAT_04878928 = &DAT_04675708;
    DAT_04878940 = 1;
  }
  return;
}


