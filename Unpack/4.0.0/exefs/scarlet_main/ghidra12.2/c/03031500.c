/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031500; name: _INIT_544
 */


void _INIT_544(void)

{
  if ((DAT_04870570 & 1) == 0) {
    DAT_04870560 = 0;
    DAT_04870568 = 0;
    DAT_04870550 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870550;
    DAT_04870558 = &DAT_0463ad30;
    DAT_04870570 = 1;
  }
  return;
}


