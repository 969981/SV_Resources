/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324b270; name: _INIT_1761
 */


void _INIT_1761(void)

{
  if ((DAT_04888920 & 1) == 0) {
    DAT_04888910 = 0;
    DAT_04888918 = 0;
    DAT_04888900 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888900;
    DAT_04888908 = &DAT_046bc198;
    DAT_04888920 = 1;
  }
  return;
}


