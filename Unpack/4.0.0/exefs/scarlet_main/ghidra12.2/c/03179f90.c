/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03179f90; name: _INIT_1416
 */


void _INIT_1416(void)

{
  if ((DAT_0487cbc8 & 1) == 0) {
    DAT_0487cbb8 = 0;
    DAT_0487cbc0 = 0;
    DAT_0487cba8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cba8;
    DAT_0487cbb0 = &DAT_04692b98;
    DAT_0487cbc8 = 1;
  }
  return;
}


