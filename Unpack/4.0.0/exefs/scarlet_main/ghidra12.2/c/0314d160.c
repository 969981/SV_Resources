/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d160; name: _INIT_1138
 */


void _INIT_1138(void)

{
  if ((DAT_04879390 & 1) == 0) {
    DAT_04879380 = 0;
    DAT_04879388 = 0;
    DAT_04879370 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879370;
    DAT_04879378 = &DAT_046793e0;
    DAT_04879390 = 1;
  }
  return;
}


