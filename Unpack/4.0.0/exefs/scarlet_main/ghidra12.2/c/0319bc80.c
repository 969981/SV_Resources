/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319bc80; name: _INIT_1506
 */


void _INIT_1506(void)

{
  if ((DAT_0487e308 & 1) == 0) {
    DAT_0487e2f8 = 0;
    DAT_0487e300 = 0;
    DAT_0487e2e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e2e8;
    DAT_0487e2f0 = &DAT_0469e4a8;
    DAT_0487e308 = 1;
  }
  return;
}


