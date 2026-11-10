/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318eab0; name: _INIT_1476
 */


void _INIT_1476(void)

{
  if ((DAT_0487d760 & 1) == 0) {
    DAT_0487d750 = 0;
    DAT_0487d758 = 0;
    DAT_0487d740 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d740;
    DAT_0487d748 = &DAT_046985b8;
    DAT_0487d760 = 1;
  }
  return;
}


