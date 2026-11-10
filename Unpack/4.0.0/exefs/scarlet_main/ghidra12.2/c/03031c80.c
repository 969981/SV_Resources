/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031c80; name: _INIT_568
 */


void _INIT_568(void)

{
  if ((DAT_04870930 & 1) == 0) {
    DAT_04870920 = 0;
    DAT_04870928 = 0;
    DAT_04870910 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870910;
    DAT_04870918 = &DAT_0463c458;
    DAT_04870930 = 1;
  }
  return;
}


