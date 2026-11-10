/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319ba50; name: _INIT_1499
 */


void _INIT_1499(void)

{
  if ((DAT_0487e1f0 & 1) == 0) {
    DAT_0487e1e0 = 0;
    DAT_0487e1e8 = 0;
    DAT_0487e1d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e1d0;
    DAT_0487e1d8 = &DAT_0469dd40;
    DAT_0487e1f0 = 1;
  }
  return;
}


