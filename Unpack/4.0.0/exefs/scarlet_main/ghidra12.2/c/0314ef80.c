/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ef80; name: _INIT_1234
 */


void _INIT_1234(void)

{
  if ((DAT_0487a290 & 1) == 0) {
    DAT_0487a280 = 0;
    DAT_0487a288 = 0;
    DAT_0487a270 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a270;
    DAT_0487a278 = &DAT_0467f4d0;
    DAT_0487a290 = 1;
  }
  return;
}


