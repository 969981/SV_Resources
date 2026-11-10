/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178320; name: _INIT_1359
 */


void _INIT_1359(void)

{
  if ((DAT_0487c2e0 & 1) == 0) {
    DAT_0487c2d0 = 0;
    DAT_0487c2d8 = 0;
    DAT_0487c2c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c2c0;
    DAT_0487c2c8 = &DAT_0468f038;
    DAT_0487c2e0 = 1;
  }
  return;
}


