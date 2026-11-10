/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176230; name: _INIT_1298
 */


void _INIT_1298(void)

{
  if ((DAT_0487b958 & 1) == 0) {
    DAT_0487b948 = 0;
    DAT_0487b950 = 0;
    DAT_0487b938 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b938;
    DAT_0487b940 = &DAT_0468b000;
    DAT_0487b958 = 1;
  }
  return;
}


