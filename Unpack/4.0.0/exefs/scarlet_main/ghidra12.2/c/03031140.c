/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031140; name: _INIT_532
 */


void _INIT_532(void)

{
  if ((DAT_04870390 & 1) == 0) {
    DAT_04870380 = 0;
    DAT_04870388 = 0;
    DAT_04870370 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870370;
    DAT_04870378 = &DAT_0463a248;
    DAT_04870390 = 1;
  }
  return;
}


