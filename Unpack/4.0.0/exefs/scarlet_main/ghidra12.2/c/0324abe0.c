/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324abe0; name: _INIT_1740
 */


void _INIT_1740(void)

{
  if ((DAT_048885d8 & 1) == 0) {
    DAT_048885c8 = 0;
    DAT_048885d0 = 0;
    DAT_048885b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048885b8;
    DAT_048885c0 = &DAT_046bae00;
    DAT_048885d8 = 1;
  }
  return;
}


