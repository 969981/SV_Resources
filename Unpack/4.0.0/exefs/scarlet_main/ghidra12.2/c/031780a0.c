/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031780a0; name: _INIT_1351
 */


void _INIT_1351(void)

{
  if ((DAT_0487c1a0 & 1) == 0) {
    DAT_0487c190 = 0;
    DAT_0487c198 = 0;
    DAT_0487c180 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c180;
    DAT_0487c188 = &DAT_0468e710;
    DAT_0487c1a0 = 1;
  }
  return;
}


