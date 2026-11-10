/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0302d380; name: _INIT_518
 */


void _INIT_518(void)

{
  if ((DAT_04870160 & 1) == 0) {
    DAT_04870150 = 0;
    DAT_04870158 = 0;
    DAT_04870140 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870140;
    DAT_04870148 = &DAT_046395e8;
    DAT_04870160 = 1;
  }
  return;
}


