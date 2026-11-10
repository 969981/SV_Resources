/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178cd0; name: _INIT_1390
 */


void _INIT_1390(void)

{
  if ((DAT_0487c7b8 & 1) == 0) {
    DAT_0487c7a8 = 0;
    DAT_0487c7b0 = 0;
    DAT_0487c798 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c798;
    DAT_0487c7a0 = &DAT_04691148;
    DAT_0487c7b8 = 1;
  }
  return;
}


