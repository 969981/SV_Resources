/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178000; name: _INIT_1349
 */


void _INIT_1349(void)

{
  if ((DAT_0487c150 & 1) == 0) {
    DAT_0487c140 = 0;
    DAT_0487c148 = 0;
    DAT_0487c130 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c130;
    DAT_0487c138 = &DAT_0468e530;
    DAT_0487c150 = 1;
  }
  return;
}


