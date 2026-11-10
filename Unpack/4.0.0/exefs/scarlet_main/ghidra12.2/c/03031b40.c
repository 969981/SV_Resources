/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031b40; name: _INIT_564
 */


void _INIT_564(void)

{
  if ((DAT_04870890 & 1) == 0) {
    DAT_04870880 = 0;
    DAT_04870888 = 0;
    DAT_04870870 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870870;
    DAT_04870878 = &DAT_0463bfb0;
    DAT_04870890 = 1;
  }
  return;
}


