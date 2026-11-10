/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030325d0; name: _INIT_598
 */


void _INIT_598(void)

{
  if ((DAT_04870dd0 & 1) == 0) {
    DAT_04870dc0 = 0;
    DAT_04870dc8 = 0;
    DAT_04870db0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870db0;
    DAT_04870db8 = &DAT_0463e0d8;
    DAT_04870dd0 = 1;
  }
  return;
}


