/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036400; name: _INIT_797
 */


void _INIT_797(void)

{
  if ((DAT_04872ce8 & 1) == 0) {
    DAT_04872cd8 = 0;
    DAT_04872ce0 = 0;
    DAT_04872cc8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872cc8;
    DAT_04872cd0 = &DAT_0464a1f8;
    DAT_04872ce8 = 1;
  }
  return;
}


