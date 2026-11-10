/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ab60; name: _INIT_1063
 */


void _INIT_1063(void)

{
  if ((DAT_048787d8 & 1) == 0) {
    DAT_048787c8 = 0;
    DAT_048787d0 = 0;
    DAT_048787b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048787b8;
    DAT_048787c0 = &DAT_04674f98;
    DAT_048787d8 = 1;
  }
  return;
}


