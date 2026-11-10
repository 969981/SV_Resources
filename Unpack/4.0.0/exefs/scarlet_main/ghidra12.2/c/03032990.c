/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032990; name: _INIT_610
 */


void _INIT_610(void)

{
  if ((DAT_04870fb0 & 1) == 0) {
    DAT_04870fa0 = 0;
    DAT_04870fa8 = 0;
    DAT_04870f90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870f90;
    DAT_04870f98 = &DAT_0463ecc0;
    DAT_04870fb0 = 1;
  }
  return;
}


