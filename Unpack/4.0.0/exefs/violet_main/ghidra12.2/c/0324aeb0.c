/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324aeb0; name: _INIT_1749
 */


void _INIT_1749(void)

{
  if ((DAT_04888740 & 1) == 0) {
    DAT_04888730 = 0;
    DAT_04888738 = 0;
    DAT_04888720 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888720;
    DAT_04888728 = &DAT_046bb5b8;
    DAT_04888740 = 1;
  }
  return;
}


