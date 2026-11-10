/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324aa50; name: _INIT_1735
 */


void _INIT_1735(void)

{
  if ((DAT_04888510 & 1) == 0) {
    DAT_04888500 = 0;
    DAT_04888508 = 0;
    DAT_048884f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048884f0;
    DAT_048884f8 = &DAT_046baa38;
    DAT_04888510 = 1;
  }
  return;
}


