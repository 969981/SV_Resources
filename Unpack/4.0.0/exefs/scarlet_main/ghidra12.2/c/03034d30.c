/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034d30; name: _INIT_724
 */


void _INIT_724(void)

{
  if ((DAT_04872180 & 1) == 0) {
    DAT_04872170 = 0;
    DAT_04872178 = 0;
    DAT_04872160 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872160;
    DAT_04872168 = &DAT_04645958;
    DAT_04872180 = 1;
  }
  return;
}


