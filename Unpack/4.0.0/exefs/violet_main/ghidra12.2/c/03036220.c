/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036220; name: _INIT_791
 */


void _INIT_791(void)

{
  if ((DAT_04872bf8 & 1) == 0) {
    DAT_04872be8 = 0;
    DAT_04872bf0 = 0;
    DAT_04872bd8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872bd8;
    DAT_04872be0 = &DAT_04649e38;
    DAT_04872bf8 = 1;
  }
  return;
}


