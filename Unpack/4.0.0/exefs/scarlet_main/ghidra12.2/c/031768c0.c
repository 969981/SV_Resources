/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031768c0; name: _INIT_1319
 */


void _INIT_1319(void)

{
  if ((DAT_0487bca0 & 1) == 0) {
    DAT_0487bc90 = 0;
    DAT_0487bc98 = 0;
    DAT_0487bc80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bc80;
    DAT_0487bc88 = &DAT_0468c7d0;
    DAT_0487bca0 = 1;
  }
  return;
}


