/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035b40; name: _INIT_769
 */


void _INIT_769(void)

{
  if ((DAT_04872888 & 1) == 0) {
    DAT_04872878 = 0;
    DAT_04872880 = 0;
    DAT_04872868 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872868;
    DAT_04872870 = &DAT_04648620;
    DAT_04872888 = 1;
  }
  return;
}


