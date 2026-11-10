/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263f80; name: _INIT_1813
 */


void _INIT_1813(void)

{
  if ((DAT_04889b10 & 1) == 0) {
    DAT_04889b00 = 0;
    DAT_04889b08 = 0;
    DAT_04889af0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889af0;
    DAT_04889af8 = &DAT_046c3460;
    DAT_04889b10 = 1;
  }
  return;
}


