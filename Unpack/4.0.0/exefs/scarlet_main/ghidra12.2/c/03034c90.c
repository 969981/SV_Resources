/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034c90; name: _INIT_722
 */


void _INIT_722(void)

{
  if ((DAT_04872130 & 1) == 0) {
    DAT_04872120 = 0;
    DAT_04872128 = 0;
    DAT_04872110 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872110;
    DAT_04872118 = &DAT_04645768;
    DAT_04872130 = 1;
  }
  return;
}


