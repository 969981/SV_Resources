/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317b2b0; name: _INIT_1438
 */


void _INIT_1438(void)

{
  if ((DAT_0487cf38 & 1) == 0) {
    DAT_0487cf28 = 0;
    DAT_0487cf30 = 0;
    DAT_0487cf18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cf18;
    DAT_0487cf20 = &DAT_04693f58;
    DAT_0487cf38 = 1;
  }
  return;
}


