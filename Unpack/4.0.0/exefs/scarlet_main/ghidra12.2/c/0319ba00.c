/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319ba00; name: _INIT_1498
 */


void _INIT_1498(void)

{
  if ((DAT_0487e1c8 & 1) == 0) {
    DAT_0487e1b8 = 0;
    DAT_0487e1c0 = 0;
    DAT_0487e1a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e1a8;
    DAT_0487e1b0 = &DAT_0469dca0;
    DAT_0487e1c8 = 1;
  }
  return;
}


