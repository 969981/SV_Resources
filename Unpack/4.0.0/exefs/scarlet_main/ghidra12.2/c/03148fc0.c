/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148fc0; name: _INIT_987
 */


void _INIT_987(void)

{
  if ((DAT_04877bf8 & 1) == 0) {
    DAT_04877be8 = 0;
    DAT_04877bf0 = 0;
    DAT_04877bd8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877bd8;
    DAT_04877be0 = &DAT_04670440;
    DAT_04877bf8 = 1;
  }
  return;
}


