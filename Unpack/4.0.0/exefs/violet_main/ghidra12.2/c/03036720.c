/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036720; name: _INIT_807
 */


void _INIT_807(void)

{
  if ((DAT_04872e78 & 1) == 0) {
    DAT_04872e68 = 0;
    DAT_04872e70 = 0;
    DAT_04872e58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872e58;
    DAT_04872e60 = &DAT_0464aca0;
    DAT_04872e78 = 1;
  }
  return;
}


