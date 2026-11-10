/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314da40; name: _INIT_1166
 */


void _INIT_1166(void)

{
  if ((DAT_048797f0 & 1) == 0) {
    DAT_048797e0 = 0;
    DAT_048797e8 = 0;
    DAT_048797d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048797d0;
    DAT_048797d8 = &DAT_0467af10;
    DAT_048797f0 = 1;
  }
  return;
}


