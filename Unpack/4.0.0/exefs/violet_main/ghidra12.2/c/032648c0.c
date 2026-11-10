/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032648c0; name: _INIT_1843
 */


void _INIT_1843(void)

{
  if ((DAT_04889fa0 & 1) == 0) {
    DAT_04889f90 = 0;
    DAT_04889f98 = 0;
    DAT_04889f80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889f80;
    DAT_04889f88 = &DAT_046c53c0;
    DAT_04889fa0 = 1;
  }
  return;
}


