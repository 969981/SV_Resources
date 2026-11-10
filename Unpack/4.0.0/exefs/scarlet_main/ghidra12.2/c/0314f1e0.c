/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f1e0; name: _INIT_1237
 */


void _INIT_1237(void)

{
  if ((DAT_0487a308 & 1) == 0) {
    DAT_0487a2f8 = 0;
    DAT_0487a300 = 0;
    DAT_0487a2e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a2e8;
    DAT_0487a2f0 = &DAT_0467f768;
    DAT_0487a308 = 1;
  }
  return;
}


