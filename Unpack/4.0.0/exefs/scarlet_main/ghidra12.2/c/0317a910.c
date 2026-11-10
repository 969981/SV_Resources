/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a910; name: _INIT_1427
 */


void _INIT_1427(void)

{
  if ((DAT_0487cd80 & 1) == 0) {
    DAT_0487cd70 = 0;
    DAT_0487cd78 = 0;
    DAT_0487cd60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cd60;
    DAT_0487cd68 = &DAT_046935a8;
    DAT_0487cd80 = 1;
  }
  return;
}


