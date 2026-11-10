/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264640; name: _INIT_1835
 */


void _INIT_1835(void)

{
  if ((DAT_04889e60 & 1) == 0) {
    DAT_04889e50 = 0;
    DAT_04889e58 = 0;
    DAT_04889e40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889e40;
    DAT_04889e48 = &DAT_046c4b80;
    DAT_04889e60 = 1;
  }
  return;
}


