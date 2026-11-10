/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149a10; name: _INIT_1020
 */


void _INIT_1020(void)

{
  if ((DAT_04878120 & 1) == 0) {
    DAT_04878110 = 0;
    DAT_04878118 = 0;
    DAT_04878100 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878100;
    DAT_04878108 = &DAT_04672700;
    DAT_04878120 = 1;
  }
  return;
}


