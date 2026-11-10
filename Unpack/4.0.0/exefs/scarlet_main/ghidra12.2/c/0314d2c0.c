/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d2c0; name: _INIT_1142
 */


void _INIT_1142(void)

{
  if ((DAT_04879430 & 1) == 0) {
    DAT_04879420 = 0;
    DAT_04879428 = 0;
    DAT_04879410 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879410;
    DAT_04879418 = &DAT_04679798;
    DAT_04879430 = 1;
  }
  return;
}


