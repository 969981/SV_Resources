/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b6d0; name: _INIT_1775
 */


void _INIT_1775(void)

{
  if ((DAT_04888b50 & 1) == 0) {
    DAT_04888b40 = 0;
    DAT_04888b48 = 0;
    DAT_04888b30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888b30;
    DAT_04888b38 = &DAT_046bce78;
    DAT_04888b50 = 1;
  }
  return;
}


