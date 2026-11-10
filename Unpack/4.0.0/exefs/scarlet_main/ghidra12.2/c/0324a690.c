/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a690; name: _INIT_1723
 */


void _INIT_1723(void)

{
  if ((DAT_04888330 & 1) == 0) {
    DAT_04888320 = 0;
    DAT_04888328 = 0;
    DAT_04888310 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888310;
    DAT_04888318 = &DAT_046b9ee0;
    DAT_04888330 = 1;
  }
  return;
}


