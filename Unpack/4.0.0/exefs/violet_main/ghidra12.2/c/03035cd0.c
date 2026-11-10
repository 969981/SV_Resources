/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035cd0; name: _INIT_774
 */


void _INIT_774(void)

{
  if ((DAT_04872950 & 1) == 0) {
    DAT_04872940 = 0;
    DAT_04872948 = 0;
    DAT_04872930 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872930;
    DAT_04872938 = &DAT_04648b38;
    DAT_04872950 = 1;
  }
  return;
}


