/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a550; name: _INIT_1719
 */


void _INIT_1719(void)

{
  if ((DAT_04888290 & 1) == 0) {
    DAT_04888280 = 0;
    DAT_04888288 = 0;
    DAT_04888270 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888270;
    DAT_04888278 = &DAT_046b9b50;
    DAT_04888290 = 1;
  }
  return;
}


