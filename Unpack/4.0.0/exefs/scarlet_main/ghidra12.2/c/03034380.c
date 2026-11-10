/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034380; name: _INIT_693
 */


void _INIT_693(void)

{
  if ((DAT_04871ca8 & 1) == 0) {
    DAT_04871c98 = 0;
    DAT_04871ca0 = 0;
    DAT_04871c88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871c88;
    DAT_04871c90 = &DAT_04643910;
    DAT_04871ca8 = 1;
  }
  return;
}


