/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030332a0; name: _INIT_639
 */


void _INIT_639(void)

{
  if ((DAT_04871438 & 1) == 0) {
    DAT_04871428 = 0;
    DAT_04871430 = 0;
    DAT_04871418 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871418;
    DAT_04871420 = &DAT_046407b0;
    DAT_04871438 = 1;
  }
  return;
}


