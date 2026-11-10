/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324ac30; name: _INIT_1741
 */


void _INIT_1741(void)

{
  if ((DAT_04888600 & 1) == 0) {
    DAT_048885f0 = 0;
    DAT_048885f8 = 0;
    DAT_048885e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048885e0;
    DAT_048885e8 = &DAT_046baea0;
    DAT_04888600 = 1;
  }
  return;
}


