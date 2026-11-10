/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a5f0; name: _INIT_1046
 */


void _INIT_1046(void)

{
  if ((DAT_04878530 & 1) == 0) {
    DAT_04878520 = 0;
    DAT_04878528 = 0;
    DAT_04878510 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878510;
    DAT_04878518 = &DAT_04673fc0;
    DAT_04878530 = 1;
  }
  return;
}


