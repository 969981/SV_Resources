/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034600; name: _INIT_701
 */


void _INIT_701(void)

{
  if ((DAT_04871de8 & 1) == 0) {
    DAT_04871dd8 = 0;
    DAT_04871de0 = 0;
    DAT_04871dc8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871dc8;
    DAT_04871dd0 = &DAT_04644280;
    DAT_04871de8 = 1;
  }
  return;
}


