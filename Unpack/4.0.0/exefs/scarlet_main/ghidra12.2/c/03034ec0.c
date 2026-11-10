/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034ec0; name: _INIT_729
 */


void _INIT_729(void)

{
  if ((DAT_04872248 & 1) == 0) {
    DAT_04872238 = 0;
    DAT_04872240 = 0;
    DAT_04872228 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872228;
    DAT_04872230 = &DAT_04645dd8;
    DAT_04872248 = 1;
  }
  return;
}


