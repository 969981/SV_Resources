/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a530; name: _INIT_1424
 */


void _INIT_1424(void)

{
  if ((DAT_0487cd08 & 1) == 0) {
    DAT_0487ccf8 = 0;
    DAT_0487cd00 = 0;
    DAT_0487cce8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cce8;
    DAT_0487ccf0 = &DAT_04693310;
    DAT_0487cd08 = 1;
  }
  return;
}


