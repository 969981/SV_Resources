/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b2c0; name: _INIT_1762
 */


void _INIT_1762(void)

{
  if ((DAT_04888948 & 1) == 0) {
    DAT_04888938 = 0;
    DAT_04888940 = 0;
    DAT_04888928 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888928;
    DAT_04888930 = &DAT_046bc268;
    DAT_04888948 = 1;
  }
  return;
}


