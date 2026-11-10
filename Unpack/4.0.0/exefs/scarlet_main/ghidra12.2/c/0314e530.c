/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e530; name: _INIT_1201
 */


void _INIT_1201(void)

{
  if ((DAT_04879d68 & 1) == 0) {
    DAT_04879d58 = 0;
    DAT_04879d60 = 0;
    DAT_04879d48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879d48;
    DAT_04879d50 = &DAT_0467d1a0;
    DAT_04879d68 = 1;
  }
  return;
}


