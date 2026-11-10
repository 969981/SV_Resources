/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324ab90; name: _INIT_1739
 */


void _INIT_1739(void)

{
  if ((DAT_048885b0 & 1) == 0) {
    DAT_048885a0 = 0;
    DAT_048885a8 = 0;
    DAT_04888590 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888590;
    DAT_04888598 = &DAT_046bad60;
    DAT_048885b0 = 1;
  }
  return;
}


