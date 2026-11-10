/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178370; name: _INIT_1360
 */


void _INIT_1360(void)

{
  if ((DAT_0487c308 & 1) == 0) {
    DAT_0487c2f8 = 0;
    DAT_0487c300 = 0;
    DAT_0487c2e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c2e8;
    DAT_0487c2f0 = &DAT_0468f120;
    DAT_0487c308 = 1;
  }
  return;
}


