/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d8b0; name: _INIT_1161
 */


void _INIT_1161(void)

{
  if ((DAT_04879728 & 1) == 0) {
    DAT_04879718 = 0;
    DAT_04879720 = 0;
    DAT_04879708 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879708;
    DAT_04879710 = &DAT_0467aa88;
    DAT_04879728 = 1;
  }
  return;
}


