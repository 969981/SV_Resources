/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f21c0; name: _INIT_1634
 */


void _INIT_1634(void)

{
  if ((DAT_04884c90 & 1) == 0) {
    DAT_04884c80 = 0;
    DAT_04884c88 = 0;
    DAT_04884c70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884c70;
    DAT_04884c78 = &DAT_046a7b18;
    DAT_04884c90 = 1;
  }
  return;
}


