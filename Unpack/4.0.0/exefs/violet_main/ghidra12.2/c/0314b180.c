/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314b180; name: _INIT_1077
 */


void _INIT_1077(void)

{
  if ((DAT_04878a08 & 1) == 0) {
    DAT_048789f8 = 0;
    DAT_04878a00 = 0;
    DAT_048789e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048789e8;
    DAT_048789f0 = &DAT_04675be0;
    DAT_04878a08 = 1;
  }
  return;
}


