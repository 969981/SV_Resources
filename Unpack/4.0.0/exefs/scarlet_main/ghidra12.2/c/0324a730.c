/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a730; name: _INIT_1725
 */


void _INIT_1725(void)

{
  if ((DAT_04888380 & 1) == 0) {
    DAT_04888370 = 0;
    DAT_04888378 = 0;
    DAT_04888360 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888360;
    DAT_04888368 = &DAT_046ba0a8;
    DAT_04888380 = 1;
  }
  return;
}


