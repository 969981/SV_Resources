/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035050; name: _INIT_734
 */


void _INIT_734(void)

{
  if ((DAT_04872310 & 1) == 0) {
    DAT_04872300 = 0;
    DAT_04872308 = 0;
    DAT_048722f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048722f0;
    DAT_048722f8 = &DAT_046461e8;
    DAT_04872310 = 1;
  }
  return;
}


