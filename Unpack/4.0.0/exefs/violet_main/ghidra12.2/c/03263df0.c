/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03263df0; name: _INIT_1808
 */


void _INIT_1808(void)

{
  if ((DAT_04889a48 & 1) == 0) {
    DAT_04889a38 = 0;
    DAT_04889a40 = 0;
    DAT_04889a28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889a28;
    DAT_04889a30 = &DAT_046c2e70;
    DAT_04889a48 = 1;
  }
  return;
}


