/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032641b0; name: _INIT_1820
 */


void _INIT_1820(void)

{
  if ((DAT_04889c28 & 1) == 0) {
    DAT_04889c18 = 0;
    DAT_04889c20 = 0;
    DAT_04889c08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889c08;
    DAT_04889c10 = &DAT_046c3ce0;
    DAT_04889c28 = 1;
  }
  return;
}


