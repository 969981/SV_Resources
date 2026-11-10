/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318ea60; name: _INIT_1475
 */


void _INIT_1475(void)

{
  if ((DAT_0487d738 & 1) == 0) {
    DAT_0487d728 = 0;
    DAT_0487d730 = 0;
    DAT_0487d718 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d718;
    DAT_0487d720 = &DAT_04698440;
    DAT_0487d738 = 1;
  }
  return;
}


