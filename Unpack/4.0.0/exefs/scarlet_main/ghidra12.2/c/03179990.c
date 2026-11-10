/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03179990; name: _INIT_1411
 */


void _INIT_1411(void)

{
  if ((DAT_0487cb00 & 1) == 0) {
    DAT_0487caf0 = 0;
    DAT_0487caf8 = 0;
    DAT_0487cae0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cae0;
    DAT_0487cae8 = &DAT_04692720;
    DAT_0487cb00 = 1;
  }
  return;
}


