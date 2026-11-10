/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324acd0; name: _INIT_1743
 */


void _INIT_1743(void)

{
  if ((DAT_04888650 & 1) == 0) {
    DAT_04888640 = 0;
    DAT_04888648 = 0;
    DAT_04888630 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888630;
    DAT_04888638 = &DAT_046bb010;
    DAT_04888650 = 1;
  }
  return;
}


