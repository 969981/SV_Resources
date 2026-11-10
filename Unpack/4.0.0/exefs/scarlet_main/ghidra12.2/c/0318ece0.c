/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318ece0; name: _INIT_1483
 */


void _INIT_1483(void)

{
  if ((DAT_0487d878 & 1) == 0) {
    DAT_0487d868 = 0;
    DAT_0487d870 = 0;
    DAT_0487d858 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d858;
    DAT_0487d860 = &DAT_04698ce8;
    DAT_0487d878 = 1;
  }
  return;
}


