/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035550; name: _INIT_750
 */


void _INIT_750(void)

{
  if ((DAT_04872590 & 1) == 0) {
    DAT_04872580 = 0;
    DAT_04872588 = 0;
    DAT_04872570 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872570;
    DAT_04872578 = &DAT_04647158;
    DAT_04872590 = 1;
  }
  return;
}


