/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263c70; name: _INIT_1803
 */


void _INIT_1803(void)

{
  if ((DAT_04889990 & 1) == 0) {
    DAT_04889980 = 0;
    DAT_04889988 = 0;
    DAT_04889970 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889970;
    DAT_04889978 = &DAT_046c2ad0;
    DAT_04889990 = 1;
  }
  return;
}


