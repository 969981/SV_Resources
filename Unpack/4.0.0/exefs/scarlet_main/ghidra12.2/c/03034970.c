/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034970; name: _INIT_712
 */


void _INIT_712(void)

{
  if ((DAT_04871fa0 & 1) == 0) {
    DAT_04871f90 = 0;
    DAT_04871f98 = 0;
    DAT_04871f80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871f80;
    DAT_04871f88 = &DAT_04644db8;
    DAT_04871fa0 = 1;
  }
  return;
}


