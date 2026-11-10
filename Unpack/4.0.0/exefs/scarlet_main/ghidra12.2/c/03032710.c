/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032710; name: _INIT_602
 */


void _INIT_602(void)

{
  if ((DAT_04870e70 & 1) == 0) {
    DAT_04870e60 = 0;
    DAT_04870e68 = 0;
    DAT_04870e50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870e50;
    DAT_04870e58 = &DAT_0463e518;
    DAT_04870e70 = 1;
  }
  return;
}


