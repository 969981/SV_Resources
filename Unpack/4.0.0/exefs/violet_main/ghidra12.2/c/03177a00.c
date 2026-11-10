/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03177a00; name: _INIT_1343
 */


void _INIT_1343(void)

{
  if ((DAT_0487c060 & 1) == 0) {
    DAT_0487c050 = 0;
    DAT_0487c058 = 0;
    DAT_0487c040 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c040;
    DAT_0487c048 = &DAT_0468dee8;
    DAT_0487c060 = 1;
  }
  return;
}


