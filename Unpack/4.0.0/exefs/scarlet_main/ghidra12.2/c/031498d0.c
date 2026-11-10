/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031498d0; name: _INIT_1016
 */


void _INIT_1016(void)

{
  if ((DAT_04878080 & 1) == 0) {
    DAT_04878070 = 0;
    DAT_04878078 = 0;
    DAT_04878060 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878060;
    DAT_04878068 = &DAT_046722c0;
    DAT_04878080 = 1;
  }
  return;
}


