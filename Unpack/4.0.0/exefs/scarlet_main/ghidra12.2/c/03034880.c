/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034880; name: _INIT_709
 */


void _INIT_709(void)

{
  if ((DAT_04871f28 & 1) == 0) {
    DAT_04871f18 = 0;
    DAT_04871f20 = 0;
    DAT_04871f08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871f08;
    DAT_04871f10 = &DAT_04644ad8;
    DAT_04871f28 = 1;
  }
  return;
}


