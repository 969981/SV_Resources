/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b5f0; name: _INIT_1086
 */


void _INIT_1086(void)

{
  if ((DAT_04878b70 & 1) == 0) {
    DAT_04878b60 = 0;
    DAT_04878b68 = 0;
    DAT_04878b50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878b50;
    DAT_04878b58 = &DAT_046763d8;
    DAT_04878b70 = 1;
  }
  return;
}


