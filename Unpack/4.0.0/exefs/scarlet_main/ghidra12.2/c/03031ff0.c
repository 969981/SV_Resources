/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031ff0; name: _INIT_579
 */


void _INIT_579(void)

{
  if ((DAT_04870ae8 & 1) == 0) {
    DAT_04870ad8 = 0;
    DAT_04870ae0 = 0;
    DAT_04870ac8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870ac8;
    DAT_04870ad0 = &DAT_0463cf80;
    DAT_04870ae8 = 1;
  }
  return;
}


