/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a6e0; name: _INIT_1724
 */


void _INIT_1724(void)

{
  if ((DAT_04888358 & 1) == 0) {
    DAT_04888348 = 0;
    DAT_04888350 = 0;
    DAT_04888338 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888338;
    DAT_04888340 = &DAT_046b9f78;
    DAT_04888358 = 1;
  }
  return;
}


