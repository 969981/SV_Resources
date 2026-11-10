/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ddb0; name: _INIT_1177
 */


void _INIT_1177(void)

{
  if ((DAT_048799a8 & 1) == 0) {
    DAT_04879998 = 0;
    DAT_048799a0 = 0;
    DAT_04879988 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879988;
    DAT_04879990 = &DAT_0467ba60;
    DAT_048799a8 = 1;
  }
  return;
}


