/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f640; name: _INIT_1251
 */


void _INIT_1251(void)

{
  if ((DAT_0487a538 & 1) == 0) {
    DAT_0487a528 = 0;
    DAT_0487a530 = 0;
    DAT_0487a518 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a518;
    DAT_0487a520 = &DAT_046802e0;
    DAT_0487a538 = 1;
  }
  return;
}


