/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035820; name: _INIT_759
 */


void _INIT_759(void)

{
  if ((DAT_048726f8 & 1) == 0) {
    DAT_048726e8 = 0;
    DAT_048726f0 = 0;
    DAT_048726d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048726d8;
    DAT_048726e0 = &DAT_04647960;
    DAT_048726f8 = 1;
  }
  return;
}


