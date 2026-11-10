/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031767d0; name: _INIT_1316
 */


void _INIT_1316(void)

{
  if ((DAT_0487bc28 & 1) == 0) {
    DAT_0487bc18 = 0;
    DAT_0487bc20 = 0;
    DAT_0487bc08 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bc08;
    DAT_0487bc10 = &DAT_0468c478;
    DAT_0487bc28 = 1;
  }
  return;
}


