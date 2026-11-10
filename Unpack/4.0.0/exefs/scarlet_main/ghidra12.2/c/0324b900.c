/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b900; name: _INIT_1782
 */


void _INIT_1782(void)

{
  if ((DAT_04888c68 & 1) == 0) {
    DAT_04888c58 = 0;
    DAT_04888c60 = 0;
    DAT_04888c48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888c48;
    DAT_04888c50 = &DAT_046bd5c0;
    DAT_04888c68 = 1;
  }
  return;
}


