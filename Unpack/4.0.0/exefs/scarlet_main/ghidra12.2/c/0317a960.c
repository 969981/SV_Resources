/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a960; name: _INIT_1428
 */


void _INIT_1428(void)

{
  if ((DAT_0487cda8 & 1) == 0) {
    DAT_0487cd98 = 0;
    DAT_0487cda0 = 0;
    DAT_0487cd88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cd88;
    DAT_0487cd90 = &DAT_04693668;
    DAT_0487cda8 = 1;
  }
  return;
}


