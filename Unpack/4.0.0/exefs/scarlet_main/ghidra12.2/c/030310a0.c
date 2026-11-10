/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030310a0; name: _INIT_530
 */


void _INIT_530(void)

{
  if ((DAT_04870340 & 1) == 0) {
    DAT_04870330 = 0;
    DAT_04870338 = 0;
    DAT_04870320 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870320;
    DAT_04870328 = &DAT_0463a040;
    DAT_04870340 = 1;
  }
  return;
}


