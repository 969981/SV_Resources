/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031787d0; name: _INIT_1374
 */


void _INIT_1374(void)

{
  if ((DAT_0487c538 & 1) == 0) {
    DAT_0487c528 = 0;
    DAT_0487c530 = 0;
    DAT_0487c518 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c518;
    DAT_0487c520 = &DAT_04690038;
    DAT_0487c538 = 1;
  }
  return;
}


