/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030346f0; name: _INIT_704
 */


void _INIT_704(void)

{
  if ((DAT_04871e60 & 1) == 0) {
    DAT_04871e50 = 0;
    DAT_04871e58 = 0;
    DAT_04871e40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871e40;
    DAT_04871e48 = &DAT_04644518;
    DAT_04871e60 = 1;
  }
  return;
}


