/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178be0; name: _INIT_1387
 */


void _INIT_1387(void)

{
  if ((DAT_0487c740 & 1) == 0) {
    DAT_0487c730 = 0;
    DAT_0487c738 = 0;
    DAT_0487c720 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c720;
    DAT_0487c728 = &DAT_04690d08;
    DAT_0487c740 = 1;
  }
  return;
}


