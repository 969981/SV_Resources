/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178190; name: _INIT_1354
 */


void _INIT_1354(void)

{
  if ((DAT_0487c218 & 1) == 0) {
    DAT_0487c208 = 0;
    DAT_0487c210 = 0;
    DAT_0487c1f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c1f8;
    DAT_0487c200 = &DAT_0468eaa8;
    DAT_0487c218 = 1;
  }
  return;
}


