/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263e40; name: _INIT_1809
 */


void _INIT_1809(void)

{
  if ((DAT_04889a70 & 1) == 0) {
    DAT_04889a60 = 0;
    DAT_04889a68 = 0;
    DAT_04889a50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889a50;
    DAT_04889a58 = &DAT_046c2fd0;
    DAT_04889a70 = 1;
  }
  return;
}


