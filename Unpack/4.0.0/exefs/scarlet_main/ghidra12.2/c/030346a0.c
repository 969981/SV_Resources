/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030346a0; name: _INIT_703
 */


void _INIT_703(void)

{
  if ((DAT_04871e38 & 1) == 0) {
    DAT_04871e28 = 0;
    DAT_04871e30 = 0;
    DAT_04871e18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871e18;
    DAT_04871e20 = &DAT_04644428;
    DAT_04871e38 = 1;
  }
  return;
}


