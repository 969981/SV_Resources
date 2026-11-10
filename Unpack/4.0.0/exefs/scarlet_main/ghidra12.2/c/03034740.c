/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034740; name: _INIT_705
 */


void _INIT_705(void)

{
  if ((DAT_04871e88 & 1) == 0) {
    DAT_04871e78 = 0;
    DAT_04871e80 = 0;
    DAT_04871e68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871e68;
    DAT_04871e70 = &DAT_04644608;
    DAT_04871e88 = 1;
  }
  return;
}


