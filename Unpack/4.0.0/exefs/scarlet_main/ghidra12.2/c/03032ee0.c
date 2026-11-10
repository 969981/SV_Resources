/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032ee0; name: _INIT_627
 */


void _INIT_627(void)

{
  if ((DAT_04871258 & 1) == 0) {
    DAT_04871248 = 0;
    DAT_04871250 = 0;
    DAT_04871238 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871238;
    DAT_04871240 = &DAT_0463fce0;
    DAT_04871258 = 1;
  }
  return;
}


