/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031aa0; name: _INIT_562
 */


void _INIT_562(void)

{
  if ((DAT_04870840 & 1) == 0) {
    DAT_04870830 = 0;
    DAT_04870838 = 0;
    DAT_04870820 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870820;
    DAT_04870828 = &DAT_0463be18;
    DAT_04870840 = 1;
  }
  return;
}


