/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a4b0; name: _INIT_1717
 */


void _INIT_1717(void)

{
  if ((DAT_04888240 & 1) == 0) {
    DAT_04888230 = 0;
    DAT_04888238 = 0;
    DAT_04888220 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888220;
    DAT_04888228 = &DAT_046b9960;
    DAT_04888240 = 1;
  }
  return;
}


