/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036770; name: _INIT_808
 */


void _INIT_808(void)

{
  if ((DAT_04872ea0 & 1) == 0) {
    DAT_04872e90 = 0;
    DAT_04872e98 = 0;
    DAT_04872e80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872e80;
    DAT_04872e88 = &DAT_0464ae18;
    DAT_04872ea0 = 1;
  }
  return;
}


