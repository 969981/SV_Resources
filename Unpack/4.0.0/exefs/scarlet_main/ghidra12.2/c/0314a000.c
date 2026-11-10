/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a000; name: _INIT_1034
 */


void _INIT_1034(void)

{
  if ((DAT_04878350 & 1) == 0) {
    DAT_04878340 = 0;
    DAT_04878348 = 0;
    DAT_04878330 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878330;
    DAT_04878338 = &DAT_04673490;
    DAT_04878350 = 1;
  }
  return;
}


