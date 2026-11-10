/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319bf00; name: _INIT_1514
 */


void _INIT_1514(void)

{
  if ((DAT_0487e448 & 1) == 0) {
    DAT_0487e438 = 0;
    DAT_0487e440 = 0;
    DAT_0487e428 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e428;
    DAT_0487e430 = &DAT_0469eda0;
    DAT_0487e448 = 1;
  }
  return;
}


