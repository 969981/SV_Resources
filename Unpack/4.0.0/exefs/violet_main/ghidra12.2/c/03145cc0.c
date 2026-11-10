/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03145cc0; name: _INIT_872
 */


void _INIT_872(void)

{
  if ((DAT_04876a00 & 1) == 0) {
    DAT_048769f0 = 0;
    DAT_048769f8 = 0;
    DAT_048769e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048769e0;
    DAT_048769e8 = &DAT_046696f8;
    DAT_04876a00 = 1;
  }
  return;
}


