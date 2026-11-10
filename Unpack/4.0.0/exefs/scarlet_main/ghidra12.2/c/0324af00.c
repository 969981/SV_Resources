/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324af00; name: _INIT_1750
 */


void _INIT_1750(void)

{
  if ((DAT_04888768 & 1) == 0) {
    DAT_04888758 = 0;
    DAT_04888760 = 0;
    DAT_04888748 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888748;
    DAT_04888750 = &DAT_046bb730;
    DAT_04888768 = 1;
  }
  return;
}


