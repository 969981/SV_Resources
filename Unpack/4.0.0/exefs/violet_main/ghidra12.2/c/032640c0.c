/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032640c0; name: _INIT_1817
 */


void _INIT_1817(void)

{
  if ((DAT_04889bb0 & 1) == 0) {
    DAT_04889ba0 = 0;
    DAT_04889ba8 = 0;
    DAT_04889b90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889b90;
    DAT_04889b98 = &DAT_046c38f0;
    DAT_04889bb0 = 1;
  }
  return;
}


