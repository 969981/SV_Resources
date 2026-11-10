/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c810; name: _INIT_1543
 */


void _INIT_1543(void)

{
  if ((DAT_0487e8d0 & 1) == 0) {
    DAT_0487e8c0 = 0;
    DAT_0487e8c8 = 0;
    DAT_0487e8b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e8b0;
    DAT_0487e8b8 = &DAT_046a0d18;
    DAT_0487e8d0 = 1;
  }
  return;
}


