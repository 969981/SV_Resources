/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314cbc0; name: _INIT_1129
 */


void _INIT_1129(void)

{
  if ((DAT_04879228 & 1) == 0) {
    DAT_04879218 = 0;
    DAT_04879220 = 0;
    DAT_04879208 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879208;
    DAT_04879210 = &DAT_04678990;
    DAT_04879228 = 1;
  }
  return;
}


