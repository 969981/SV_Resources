/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264410; name: _INIT_1828
 */


void _INIT_1828(void)

{
  if ((DAT_04889d48 & 1) == 0) {
    DAT_04889d38 = 0;
    DAT_04889d40 = 0;
    DAT_04889d28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889d28;
    DAT_04889d30 = &DAT_046c4448;
    DAT_04889d48 = 1;
  }
  return;
}


