/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f6e0; name: _INIT_1253
 */


void _INIT_1253(void)

{
  if ((DAT_0487a588 & 1) == 0) {
    DAT_0487a578 = 0;
    DAT_0487a580 = 0;
    DAT_0487a568 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a568;
    DAT_0487a570 = &DAT_04680420;
    DAT_0487a588 = 1;
  }
  return;
}


