/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264550; name: _INIT_1832
 */


void _INIT_1832(void)

{
  if ((DAT_04889de8 & 1) == 0) {
    DAT_04889dd8 = 0;
    DAT_04889de0 = 0;
    DAT_04889dc8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889dc8;
    DAT_04889dd0 = &DAT_046c4840;
    DAT_04889de8 = 1;
  }
  return;
}


