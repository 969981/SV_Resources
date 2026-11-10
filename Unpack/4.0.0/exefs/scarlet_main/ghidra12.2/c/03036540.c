/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036540; name: _INIT_801
 */


void _INIT_801(void)

{
  if ((DAT_04872d88 & 1) == 0) {
    DAT_04872d78 = 0;
    DAT_04872d80 = 0;
    DAT_04872d68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872d68;
    DAT_04872d70 = &DAT_0464a568;
    DAT_04872d88 = 1;
  }
  return;
}


