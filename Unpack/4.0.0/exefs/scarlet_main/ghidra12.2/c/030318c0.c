/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030318c0; name: _INIT_556
 */


void _INIT_556(void)

{
  if ((DAT_04870750 & 1) == 0) {
    DAT_04870740 = 0;
    DAT_04870748 = 0;
    DAT_04870730 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870730;
    DAT_04870738 = &DAT_0463b830;
    DAT_04870750 = 1;
  }
  return;
}


