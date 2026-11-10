/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030310f0; name: _INIT_531
 */


void _INIT_531(void)

{
  if ((DAT_04870368 & 1) == 0) {
    DAT_04870358 = 0;
    DAT_04870360 = 0;
    DAT_04870348 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870348;
    DAT_04870350 = &DAT_0463a1b8;
    DAT_04870368 = 1;
  }
  return;
}


