/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035ff0; name: _INIT_784
 */


void _INIT_784(void)

{
  if ((DAT_04872ae0 & 1) == 0) {
    DAT_04872ad0 = 0;
    DAT_04872ad8 = 0;
    DAT_04872ac0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872ac0;
    DAT_04872ac8 = &DAT_04649750;
    DAT_04872ae0 = 1;
  }
  return;
}


