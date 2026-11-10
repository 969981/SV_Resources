/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036630; name: _INIT_804
 */


void _INIT_804(void)

{
  if ((DAT_04872e00 & 1) == 0) {
    DAT_04872df0 = 0;
    DAT_04872df8 = 0;
    DAT_04872de0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872de0;
    DAT_04872de8 = &DAT_0464a838;
    DAT_04872e00 = 1;
  }
  return;
}


