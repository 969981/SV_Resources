/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e260; name: _INIT_1192
 */


void _INIT_1192(void)

{
  if ((DAT_04879c00 & 1) == 0) {
    DAT_04879bf0 = 0;
    DAT_04879bf8 = 0;
    DAT_04879be0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879be0;
    DAT_04879be8 = &DAT_0467c908;
    DAT_04879c00 = 1;
  }
  return;
}


