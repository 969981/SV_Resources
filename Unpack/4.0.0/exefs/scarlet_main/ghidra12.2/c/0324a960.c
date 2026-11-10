/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a960; name: _INIT_1732
 */


void _INIT_1732(void)

{
  if ((DAT_04888498 & 1) == 0) {
    DAT_04888488 = 0;
    DAT_04888490 = 0;
    DAT_04888478 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888478;
    DAT_04888480 = &DAT_046ba808;
    DAT_04888498 = 1;
  }
  return;
}


