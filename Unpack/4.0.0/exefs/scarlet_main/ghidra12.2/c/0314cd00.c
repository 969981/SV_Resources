/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314cd00; name: _INIT_1133
 */


void _INIT_1133(void)

{
  if ((DAT_048792c8 & 1) == 0) {
    DAT_048792b8 = 0;
    DAT_048792c0 = 0;
    DAT_048792a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048792a8;
    DAT_048792b0 = &DAT_04678eb0;
    DAT_048792c8 = 1;
  }
  return;
}


