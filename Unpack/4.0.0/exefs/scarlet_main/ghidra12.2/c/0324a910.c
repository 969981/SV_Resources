/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a910; name: _INIT_1731
 */


void _INIT_1731(void)

{
  if ((DAT_04888470 & 1) == 0) {
    DAT_04888460 = 0;
    DAT_04888468 = 0;
    DAT_04888450 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888450;
    DAT_04888458 = &DAT_046ba730;
    DAT_04888470 = 1;
  }
  return;
}


