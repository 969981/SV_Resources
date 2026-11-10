/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032df0; name: _INIT_624
 */


void _INIT_624(void)

{
  if ((DAT_048711e0 & 1) == 0) {
    DAT_048711d0 = 0;
    DAT_048711d8 = 0;
    DAT_048711c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048711c0;
    DAT_048711c8 = &DAT_0463fa50;
    DAT_048711e0 = 1;
  }
  return;
}


