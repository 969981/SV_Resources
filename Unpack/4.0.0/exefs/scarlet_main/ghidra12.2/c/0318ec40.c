/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318ec40; name: _INIT_1481
 */


void _INIT_1481(void)

{
  if ((DAT_0487d828 & 1) == 0) {
    DAT_0487d818 = 0;
    DAT_0487d820 = 0;
    DAT_0487d808 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d808;
    DAT_0487d810 = &DAT_04698a90;
    DAT_0487d828 = 1;
  }
  return;
}


