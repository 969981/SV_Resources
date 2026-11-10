/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030358c0; name: _INIT_761
 */


void _INIT_761(void)

{
  if ((DAT_04872748 & 1) == 0) {
    DAT_04872738 = 0;
    DAT_04872740 = 0;
    DAT_04872728 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872728;
    DAT_04872730 = &DAT_04647b78;
    DAT_04872748 = 1;
  }
  return;
}


