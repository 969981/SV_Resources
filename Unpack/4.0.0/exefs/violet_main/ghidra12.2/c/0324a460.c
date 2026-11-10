/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0324a460; name: _INIT_1716
 */


void _INIT_1716(void)

{
  if ((DAT_04888218 & 1) == 0) {
    DAT_04888208 = 0;
    DAT_04888210 = 0;
    DAT_048881f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048881f8;
    DAT_04888200 = &DAT_046b9880;
    DAT_04888218 = 1;
  }
  return;
}


