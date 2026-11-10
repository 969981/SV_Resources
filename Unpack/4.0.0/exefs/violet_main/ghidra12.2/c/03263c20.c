/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263c20; name: _INIT_1802
 */


void _INIT_1802(void)

{
  if ((DAT_04889968 & 1) == 0) {
    DAT_04889958 = 0;
    DAT_04889960 = 0;
    DAT_04889948 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889948;
    DAT_04889950 = &DAT_046c29d8;
    DAT_04889968 = 1;
  }
  return;
}


