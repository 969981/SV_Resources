/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d110; name: _INIT_1137
 */


void _INIT_1137(void)

{
  if ((DAT_04879368 & 1) == 0) {
    DAT_04879358 = 0;
    DAT_04879360 = 0;
    DAT_04879348 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879348;
    DAT_04879350 = &DAT_046792c0;
    DAT_04879368 = 1;
  }
  return;
}


