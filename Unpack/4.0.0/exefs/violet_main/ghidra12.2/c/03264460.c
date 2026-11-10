/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264460; name: _INIT_1829
 */


void _INIT_1829(void)

{
  if ((DAT_04889d70 & 1) == 0) {
    DAT_04889d60 = 0;
    DAT_04889d68 = 0;
    DAT_04889d50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889d50;
    DAT_04889d58 = &DAT_046c4500;
    DAT_04889d70 = 1;
  }
  return;
}


