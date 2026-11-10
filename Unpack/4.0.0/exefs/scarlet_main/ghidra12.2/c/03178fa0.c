/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178fa0; name: _INIT_1399
 */


void _INIT_1399(void)

{
  if ((DAT_0487c920 & 1) == 0) {
    DAT_0487c910 = 0;
    DAT_0487c918 = 0;
    DAT_0487c900 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c900;
    DAT_0487c908 = &DAT_04691cb8;
    DAT_0487c920 = 1;
  }
  return;
}


