/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b270; name: _INIT_1080
 */


void _INIT_1080(void)

{
  if ((DAT_04878a80 & 1) == 0) {
    DAT_04878a70 = 0;
    DAT_04878a78 = 0;
    DAT_04878a60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878a60;
    DAT_04878a68 = &DAT_04675e80;
    DAT_04878a80 = 1;
  }
  return;
}


