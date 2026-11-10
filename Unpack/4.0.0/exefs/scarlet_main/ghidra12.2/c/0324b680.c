/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b680; name: _INIT_1774
 */


void _INIT_1774(void)

{
  if ((DAT_04888b28 & 1) == 0) {
    DAT_04888b18 = 0;
    DAT_04888b20 = 0;
    DAT_04888b08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888b08;
    DAT_04888b10 = &DAT_046bcd80;
    DAT_04888b28 = 1;
  }
  return;
}


