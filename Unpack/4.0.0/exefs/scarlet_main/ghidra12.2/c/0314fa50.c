/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314fa50; name: _INIT_1264
 */


void _INIT_1264(void)

{
  if ((DAT_0487a740 & 1) == 0) {
    DAT_0487a730 = 0;
    DAT_0487a738 = 0;
    DAT_0487a720 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a720;
    DAT_0487a728 = &DAT_04680de0;
    DAT_0487a740 = 1;
  }
  return;
}


