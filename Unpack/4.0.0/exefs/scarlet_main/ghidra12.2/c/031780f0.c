/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031780f0; name: _INIT_1352
 */


void _INIT_1352(void)

{
  if ((DAT_0487c1c8 & 1) == 0) {
    DAT_0487c1b8 = 0;
    DAT_0487c1c0 = 0;
    DAT_0487c1a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c1a8;
    DAT_0487c1b0 = &DAT_0468e808;
    DAT_0487c1c8 = 1;
  }
  return;
}


