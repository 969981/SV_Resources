/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030363b0; name: _INIT_796
 */


void _INIT_796(void)

{
  if ((DAT_04872cc0 & 1) == 0) {
    DAT_04872cb0 = 0;
    DAT_04872cb8 = 0;
    DAT_04872ca0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872ca0;
    DAT_04872ca8 = &DAT_0464a158;
    DAT_04872cc0 = 1;
  }
  return;
}


