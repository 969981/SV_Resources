/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149830; name: _INIT_1014
 */


void _INIT_1014(void)

{
  if ((DAT_04878030 & 1) == 0) {
    DAT_04878020 = 0;
    DAT_04878028 = 0;
    DAT_04878010 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878010;
    DAT_04878018 = &DAT_04671fd0;
    DAT_04878030 = 1;
  }
  return;
}


