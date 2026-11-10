/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317b210; name: _INIT_1436
 */


void _INIT_1436(void)

{
  if ((DAT_0487cee8 & 1) == 0) {
    DAT_0487ced8 = 0;
    DAT_0487cee0 = 0;
    DAT_0487cec8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cec8;
    DAT_0487ced0 = &DAT_04693d78;
    DAT_0487cee8 = 1;
  }
  return;
}


