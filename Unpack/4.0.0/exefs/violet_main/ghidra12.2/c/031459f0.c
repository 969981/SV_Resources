/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031459f0; name: _INIT_863
 */


void _INIT_863(void)

{
  if ((DAT_04876898 & 1) == 0) {
    DAT_04876888 = 0;
    DAT_04876890 = 0;
    DAT_04876878 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876878;
    DAT_04876880 = &DAT_04668f78;
    DAT_04876898 = 1;
  }
  return;
}


