/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149bf0; name: _INIT_1026
 */


void _INIT_1026(void)

{
  if ((DAT_04878210 & 1) == 0) {
    DAT_04878200 = 0;
    DAT_04878208 = 0;
    DAT_048781f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048781f0;
    DAT_048781f8 = &DAT_04672d98;
    DAT_04878210 = 1;
  }
  return;
}


