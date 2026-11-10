/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b5e0; name: _INIT_1772
 */


void _INIT_1772(void)

{
  if ((DAT_04888ad8 & 1) == 0) {
    DAT_04888ac8 = 0;
    DAT_04888ad0 = 0;
    DAT_04888ab8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888ab8;
    DAT_04888ac0 = &DAT_046bcb90;
    DAT_04888ad8 = 1;
  }
  return;
}


