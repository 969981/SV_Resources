/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a5a0; name: _INIT_1720
 */


void _INIT_1720(void)

{
  if ((DAT_048882b8 & 1) == 0) {
    DAT_048882a8 = 0;
    DAT_048882b0 = 0;
    DAT_04888298 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888298;
    DAT_048882a0 = &DAT_046b9be8;
    DAT_048882b8 = 1;
  }
  return;
}


