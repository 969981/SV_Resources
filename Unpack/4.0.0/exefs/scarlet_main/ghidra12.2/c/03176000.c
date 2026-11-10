/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176000; name: _INIT_1291
 */


void _INIT_1291(void)

{
  if ((DAT_0487b840 & 1) == 0) {
    DAT_0487b830 = 0;
    DAT_0487b838 = 0;
    DAT_0487b820 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b820;
    DAT_0487b828 = &DAT_0468a730;
    DAT_0487b840 = 1;
  }
  return;
}


