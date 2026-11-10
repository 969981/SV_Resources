/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035320; name: _INIT_743
 */


void _INIT_743(void)

{
  if ((DAT_04872478 & 1) == 0) {
    DAT_04872468 = 0;
    DAT_04872470 = 0;
    DAT_04872458 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872458;
    DAT_04872460 = &DAT_046469a8;
    DAT_04872478 = 1;
  }
  return;
}


