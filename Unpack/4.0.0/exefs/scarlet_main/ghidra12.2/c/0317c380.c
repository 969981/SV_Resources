/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317c380; name: _INIT_1462
 */


void _INIT_1462(void)

{
  if ((DAT_0487d2f8 & 1) == 0) {
    DAT_0487d2e8 = 0;
    DAT_0487d2f0 = 0;
    DAT_0487d2d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d2d8;
    DAT_0487d2e0 = &DAT_046956a0;
    DAT_0487d2f8 = 1;
  }
  return;
}


