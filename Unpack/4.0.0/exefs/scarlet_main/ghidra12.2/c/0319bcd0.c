/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319bcd0; name: _INIT_1507
 */


void _INIT_1507(void)

{
  if ((DAT_0487e330 & 1) == 0) {
    DAT_0487e320 = 0;
    DAT_0487e328 = 0;
    DAT_0487e310 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e310;
    DAT_0487e318 = &DAT_0469e620;
    DAT_0487e330 = 1;
  }
  return;
}


