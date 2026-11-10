/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032850; name: _INIT_606
 */


void _INIT_606(void)

{
  if ((DAT_04870f10 & 1) == 0) {
    DAT_04870f00 = 0;
    DAT_04870f08 = 0;
    DAT_04870ef0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870ef0;
    DAT_04870ef8 = &DAT_0463e8c0;
    DAT_04870f10 = 1;
  }
  return;
}


