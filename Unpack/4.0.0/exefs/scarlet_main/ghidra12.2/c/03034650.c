/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034650; name: _INIT_702
 */


void _INIT_702(void)

{
  if ((DAT_04871e10 & 1) == 0) {
    DAT_04871e00 = 0;
    DAT_04871e08 = 0;
    DAT_04871df0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871df0;
    DAT_04871df8 = &DAT_04644338;
    DAT_04871e10 = 1;
  }
  return;
}


