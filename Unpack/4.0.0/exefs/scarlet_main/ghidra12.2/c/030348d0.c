/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030348d0; name: _INIT_710
 */


void _INIT_710(void)

{
  if ((DAT_04871f50 & 1) == 0) {
    DAT_04871f40 = 0;
    DAT_04871f48 = 0;
    DAT_04871f30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871f30;
    DAT_04871f38 = &DAT_04644bd0;
    DAT_04871f50 = 1;
  }
  return;
}


