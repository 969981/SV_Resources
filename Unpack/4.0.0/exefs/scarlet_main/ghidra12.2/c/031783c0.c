/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031783c0; name: _INIT_1361
 */


void _INIT_1361(void)

{
  if ((DAT_0487c330 & 1) == 0) {
    DAT_0487c320 = 0;
    DAT_0487c328 = 0;
    DAT_0487c310 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c310;
    DAT_0487c318 = &DAT_0468f218;
    DAT_0487c330 = 1;
  }
  return;
}


