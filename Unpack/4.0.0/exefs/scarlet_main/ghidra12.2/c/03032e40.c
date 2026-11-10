/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032e40; name: _INIT_625
 */


void _INIT_625(void)

{
  if ((DAT_04871208 & 1) == 0) {
    DAT_048711f8 = 0;
    DAT_04871200 = 0;
    DAT_048711e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048711e8;
    DAT_048711f0 = &DAT_0463fb48;
    DAT_04871208 = 1;
  }
  return;
}


