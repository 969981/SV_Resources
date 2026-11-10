/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319bbe0; name: _INIT_1504
 */


void _INIT_1504(void)

{
  if ((DAT_0487e2b8 & 1) == 0) {
    DAT_0487e2a8 = 0;
    DAT_0487e2b0 = 0;
    DAT_0487e298 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e298;
    DAT_0487e2a0 = &DAT_0469e328;
    DAT_0487e2b8 = 1;
  }
  return;
}


