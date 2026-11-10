/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263da0; name: _INIT_1807
 */


void _INIT_1807(void)

{
  if ((DAT_04889a20 & 1) == 0) {
    DAT_04889a10 = 0;
    DAT_04889a18 = 0;
    DAT_04889a00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889a00;
    DAT_04889a08 = &DAT_046c2db8;
    DAT_04889a20 = 1;
  }
  return;
}


