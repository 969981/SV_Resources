/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032643c0; name: _INIT_1827
 */


void _INIT_1827(void)

{
  if ((DAT_04889d20 & 1) == 0) {
    DAT_04889d10 = 0;
    DAT_04889d18 = 0;
    DAT_04889d00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889d00;
    DAT_04889d08 = &DAT_046c42e8;
    DAT_04889d20 = 1;
  }
  return;
}


