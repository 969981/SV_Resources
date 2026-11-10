/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a2a0; name: _INIT_1042
 */


void _INIT_1042(void)

{
  if ((DAT_04878490 & 1) == 0) {
    DAT_04878480 = 0;
    DAT_04878488 = 0;
    DAT_04878470 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878470;
    DAT_04878478 = &DAT_04673c08;
    DAT_04878490 = 1;
  }
  return;
}


