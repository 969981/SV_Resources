/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314faa0; name: _INIT_1265
 */


void _INIT_1265(void)

{
  if ((DAT_0487a768 & 1) == 0) {
    DAT_0487a758 = 0;
    DAT_0487a760 = 0;
    DAT_0487a748 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a748;
    DAT_0487a750 = &DAT_04680e80;
    DAT_0487a768 = 1;
  }
  return;
}


