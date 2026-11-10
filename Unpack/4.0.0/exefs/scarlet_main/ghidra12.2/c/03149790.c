/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149790; name: _INIT_1012
 */


void _INIT_1012(void)

{
  if ((DAT_04877fe0 & 1) == 0) {
    DAT_04877fd0 = 0;
    DAT_04877fd8 = 0;
    DAT_04877fc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877fc0;
    DAT_04877fc8 = &DAT_04671d68;
    DAT_04877fe0 = 1;
  }
  return;
}


