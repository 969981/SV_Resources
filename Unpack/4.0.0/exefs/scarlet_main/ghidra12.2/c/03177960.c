/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03177960; name: _INIT_1341
 */


void _INIT_1341(void)

{
  if ((DAT_0487c010 & 1) == 0) {
    DAT_0487c000 = 0;
    DAT_0487c008 = 0;
    DAT_0487bff0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bff0;
    DAT_0487bff8 = &DAT_0468dd08;
    DAT_0487c010 = 1;
  }
  return;
}


