/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319c540; name: _INIT_1534
 */


void _INIT_1534(void)

{
  if ((DAT_0487e768 & 1) == 0) {
    DAT_0487e758 = 0;
    DAT_0487e760 = 0;
    DAT_0487e748 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e748;
    DAT_0487e750 = &DAT_046a03a0;
    DAT_0487e768 = 1;
  }
  return;
}


