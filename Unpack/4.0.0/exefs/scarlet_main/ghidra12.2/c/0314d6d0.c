/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d6d0; name: _INIT_1155
 */


void _INIT_1155(void)

{
  if ((DAT_04879638 & 1) == 0) {
    DAT_04879628 = 0;
    DAT_04879630 = 0;
    DAT_04879618 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879618;
    DAT_04879620 = &DAT_0467a590;
    DAT_04879638 = 1;
  }
  return;
}


