/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149d30; name: _INIT_1030
 */


void _INIT_1030(void)

{
  if ((DAT_048782b0 & 1) == 0) {
    DAT_048782a0 = 0;
    DAT_048782a8 = 0;
    DAT_04878290 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878290;
    DAT_04878298 = &DAT_04673118;
    DAT_048782b0 = 1;
  }
  return;
}


