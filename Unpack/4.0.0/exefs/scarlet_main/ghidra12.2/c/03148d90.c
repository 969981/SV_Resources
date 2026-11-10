/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148d90; name: _INIT_980
 */


void _INIT_980(void)

{
  if ((DAT_04877ae0 & 1) == 0) {
    DAT_04877ad0 = 0;
    DAT_04877ad8 = 0;
    DAT_04877ac0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877ac0;
    DAT_04877ac8 = &DAT_0466fca8;
    DAT_04877ae0 = 1;
  }
  return;
}


