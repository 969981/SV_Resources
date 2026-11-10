/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324a5a0; name: _INIT_1720
 */


void _INIT_1720(void)

{
  if ((DAT_048882b8 & 1) == 0) {
    DAT_048882a8 = 0;
    DAT_048882b0 = 0;
    DAT_04888298 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888298;
    DAT_048882a0 = &DAT_046b9be8;
    DAT_048882b8 = 1;
  }
  return;
}


