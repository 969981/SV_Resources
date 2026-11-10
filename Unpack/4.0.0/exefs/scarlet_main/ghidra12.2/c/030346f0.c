/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030346f0; name: _INIT_704
 */


void _INIT_704(void)

{
  if ((DAT_04871e60 & 1) == 0) {
    DAT_04871e50 = 0;
    DAT_04871e58 = 0;
    DAT_04871e40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871e40;
    DAT_04871e48 = &DAT_04644518;
    DAT_04871e60 = 1;
  }
  return;
}


