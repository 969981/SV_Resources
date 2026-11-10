/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ab10; name: _INIT_1062
 */


void _INIT_1062(void)

{
  if ((DAT_048787b0 & 1) == 0) {
    DAT_048787a0 = 0;
    DAT_048787a8 = 0;
    DAT_04878790 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878790;
    DAT_04878798 = &DAT_04674eb8;
    DAT_048787b0 = 1;
  }
  return;
}


