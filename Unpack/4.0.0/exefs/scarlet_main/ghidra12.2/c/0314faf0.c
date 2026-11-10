/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314faf0; name: _INIT_1266
 */


void _INIT_1266(void)

{
  if ((DAT_0487a790 & 1) == 0) {
    DAT_0487a780 = 0;
    DAT_0487a788 = 0;
    DAT_0487a770 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a770;
    DAT_0487a778 = &DAT_04680ff8;
    DAT_0487a790 = 1;
  }
  return;
}


