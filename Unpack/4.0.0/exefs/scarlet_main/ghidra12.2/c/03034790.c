/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034790; name: _INIT_706
 */


void _INIT_706(void)

{
  if ((DAT_04871eb0 & 1) == 0) {
    DAT_04871ea0 = 0;
    DAT_04871ea8 = 0;
    DAT_04871e90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871e90;
    DAT_04871e98 = &DAT_046446f8;
    DAT_04871eb0 = 1;
  }
  return;
}


