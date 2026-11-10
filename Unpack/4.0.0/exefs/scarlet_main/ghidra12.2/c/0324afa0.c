/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324afa0; name: _INIT_1752
 */


void _INIT_1752(void)

{
  if ((DAT_048887b8 & 1) == 0) {
    DAT_048887a8 = 0;
    DAT_048887b0 = 0;
    DAT_04888798 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888798;
    DAT_048887a0 = &DAT_046bba20;
    DAT_048887b8 = 1;
  }
  return;
}


