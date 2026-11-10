/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324aaa0; name: _INIT_1736
 */


void _INIT_1736(void)

{
  if ((DAT_04888538 & 1) == 0) {
    DAT_04888528 = 0;
    DAT_04888530 = 0;
    DAT_04888518 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888518;
    DAT_04888520 = &DAT_046bab10;
    DAT_04888538 = 1;
  }
  return;
}


