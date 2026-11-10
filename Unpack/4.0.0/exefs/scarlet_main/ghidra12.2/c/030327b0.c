/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030327b0; name: _INIT_604
 */


void _INIT_604(void)

{
  if ((DAT_04870ec0 & 1) == 0) {
    DAT_04870eb0 = 0;
    DAT_04870eb8 = 0;
    DAT_04870ea0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870ea0;
    DAT_04870ea8 = &DAT_0463e688;
    DAT_04870ec0 = 1;
  }
  return;
}


