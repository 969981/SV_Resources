/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034e70; name: _INIT_728
 */


void _INIT_728(void)

{
  if ((DAT_04872220 & 1) == 0) {
    DAT_04872210 = 0;
    DAT_04872218 = 0;
    DAT_04872200 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872200;
    DAT_04872208 = &DAT_04645d38;
    DAT_04872220 = 1;
  }
  return;
}


