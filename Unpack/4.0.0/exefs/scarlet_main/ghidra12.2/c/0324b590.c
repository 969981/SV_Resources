/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b590; name: _INIT_1771
 */


void _INIT_1771(void)

{
  if ((DAT_04888ab0 & 1) == 0) {
    DAT_04888aa0 = 0;
    DAT_04888aa8 = 0;
    DAT_04888a90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888a90;
    DAT_04888a98 = &DAT_046bca98;
    DAT_04888ab0 = 1;
  }
  return;
}


