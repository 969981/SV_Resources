/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324ad20; name: _INIT_1744
 */


void _INIT_1744(void)

{
  if ((DAT_04888678 & 1) == 0) {
    DAT_04888668 = 0;
    DAT_04888670 = 0;
    DAT_04888658 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888658;
    DAT_04888660 = &DAT_046bb0c8;
    DAT_04888678 = 1;
  }
  return;
}


