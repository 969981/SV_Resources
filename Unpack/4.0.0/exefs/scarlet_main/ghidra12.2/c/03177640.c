/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03177640; name: _INIT_1336
 */


void _INIT_1336(void)

{
  if ((DAT_0487bf48 & 1) == 0) {
    DAT_0487bf38 = 0;
    DAT_0487bf40 = 0;
    DAT_0487bf28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bf28;
    DAT_0487bf30 = &DAT_0468d890;
    DAT_0487bf48 = 1;
  }
  return;
}


