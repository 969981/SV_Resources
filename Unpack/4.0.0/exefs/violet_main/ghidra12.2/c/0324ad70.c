/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324ad70; name: _INIT_1745
 */


void _INIT_1745(void)

{
  if ((DAT_048886a0 & 1) == 0) {
    DAT_04888690 = 0;
    DAT_04888698 = 0;
    DAT_04888680 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888680;
    DAT_04888688 = &DAT_046bb180;
    DAT_048886a0 = 1;
  }
  return;
}


