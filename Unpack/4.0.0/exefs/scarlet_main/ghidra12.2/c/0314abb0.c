/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314abb0; name: _INIT_1064
 */


void _INIT_1064(void)

{
  if ((DAT_04878800 & 1) == 0) {
    DAT_048787f0 = 0;
    DAT_048787f8 = 0;
    DAT_048787e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048787e0;
    DAT_048787e8 = &DAT_04675110;
    DAT_04878800 = 1;
  }
  return;
}


