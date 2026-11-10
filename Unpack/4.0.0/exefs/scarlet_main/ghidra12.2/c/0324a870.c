/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a870; name: _INIT_1729
 */


void _INIT_1729(void)

{
  if ((DAT_04888420 & 1) == 0) {
    DAT_04888410 = 0;
    DAT_04888418 = 0;
    DAT_04888400 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888400;
    DAT_04888408 = &DAT_046ba560;
    DAT_04888420 = 1;
  }
  return;
}


