/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ca30; name: _INIT_1124
 */


void _INIT_1124(void)

{
  if ((DAT_04879160 & 1) == 0) {
    DAT_04879150 = 0;
    DAT_04879158 = 0;
    DAT_04879140 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879140;
    DAT_04879148 = &DAT_046785e8;
    DAT_04879160 = 1;
  }
  return;
}


