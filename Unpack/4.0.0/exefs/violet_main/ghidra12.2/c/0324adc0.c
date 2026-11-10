/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324adc0; name: _INIT_1746
 */


void _INIT_1746(void)

{
  if ((DAT_048886c8 & 1) == 0) {
    DAT_048886b8 = 0;
    DAT_048886c0 = 0;
    DAT_048886a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048886a8;
    DAT_048886b0 = &DAT_046bb278;
    DAT_048886c8 = 1;
  }
  return;
}


