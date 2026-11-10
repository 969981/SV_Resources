/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145d60; name: _INIT_874
 */


void _INIT_874(void)

{
  if ((DAT_04876a50 & 1) == 0) {
    DAT_04876a40 = 0;
    DAT_04876a48 = 0;
    DAT_04876a30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876a30;
    DAT_04876a38 = &DAT_046697a8;
    DAT_04876a50 = 1;
  }
  return;
}


