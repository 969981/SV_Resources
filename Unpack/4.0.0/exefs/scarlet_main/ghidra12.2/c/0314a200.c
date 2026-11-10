/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a200; name: _INIT_1040
 */


void _INIT_1040(void)

{
  if ((DAT_04878440 & 1) == 0) {
    DAT_04878430 = 0;
    DAT_04878438 = 0;
    DAT_04878420 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878420;
    DAT_04878428 = &DAT_04673a28;
    DAT_04878440 = 1;
  }
  return;
}


