/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314d3b0; name: _INIT_1145
 */


void _INIT_1145(void)

{
  if ((DAT_048794a8 & 1) == 0) {
    DAT_04879498 = 0;
    DAT_048794a0 = 0;
    DAT_04879488 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879488;
    DAT_04879490 = &DAT_04679a90;
    DAT_048794a8 = 1;
  }
  return;
}


