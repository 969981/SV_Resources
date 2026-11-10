/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031779b0; name: _INIT_1342
 */


void _INIT_1342(void)

{
  if ((DAT_0487c038 & 1) == 0) {
    DAT_0487c028 = 0;
    DAT_0487c030 = 0;
    DAT_0487c018 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c018;
    DAT_0487c020 = &DAT_0468ddc8;
    DAT_0487c038 = 1;
  }
  return;
}


