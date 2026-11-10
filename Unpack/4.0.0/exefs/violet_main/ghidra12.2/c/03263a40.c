/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263a40; name: _INIT_1796
 */


void _INIT_1796(void)

{
  if ((DAT_04889878 & 1) == 0) {
    DAT_04889868 = 0;
    DAT_04889870 = 0;
    DAT_04889858 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889858;
    DAT_04889860 = &DAT_046c2408;
    DAT_04889878 = 1;
  }
  return;
}


