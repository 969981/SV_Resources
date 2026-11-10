/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b4f0; name: _INIT_1769
 */


void _INIT_1769(void)

{
  if ((DAT_04888a60 & 1) == 0) {
    DAT_04888a50 = 0;
    DAT_04888a58 = 0;
    DAT_04888a40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888a40;
    DAT_04888a48 = &DAT_046bc8a8;
    DAT_04888a60 = 1;
  }
  return;
}


