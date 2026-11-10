/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a370; name: _INIT_1713
 */


void _INIT_1713(void)

{
  if ((DAT_048881a0 & 1) == 0) {
    DAT_04888190 = 0;
    DAT_04888198 = 0;
    DAT_04888180 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888180;
    DAT_04888188 = &DAT_046b9580;
    DAT_048881a0 = 1;
  }
  return;
}


