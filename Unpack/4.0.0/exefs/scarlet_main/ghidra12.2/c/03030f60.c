/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03030f60; name: _INIT_526
 */


void _INIT_526(void)

{
  if ((DAT_048702a0 & 1) == 0) {
    DAT_04870290 = 0;
    DAT_04870298 = 0;
    DAT_04870280 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870280;
    DAT_04870288 = &DAT_04639d60;
    DAT_048702a0 = 1;
  }
  return;
}


