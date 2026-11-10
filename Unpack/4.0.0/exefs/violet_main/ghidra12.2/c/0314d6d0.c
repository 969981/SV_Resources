/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


