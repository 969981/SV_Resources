/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176280; name: _INIT_1299
 */


void _INIT_1299(void)

{
  if ((DAT_0487b980 & 1) == 0) {
    DAT_0487b970 = 0;
    DAT_0487b978 = 0;
    DAT_0487b960 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487b960;
    DAT_0487b968 = &DAT_0468b0f8;
    DAT_0487b980 = 1;
  }
  return;
}


