/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149a10; name: _INIT_1020
 */


void _INIT_1020(void)

{
  if ((DAT_04878120 & 1) == 0) {
    DAT_04878110 = 0;
    DAT_04878118 = 0;
    DAT_04878100 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878100;
    DAT_04878108 = &DAT_04672700;
    DAT_04878120 = 1;
  }
  return;
}


