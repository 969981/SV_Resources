/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314abb0; name: _INIT_1064
 */


void _INIT_1064(void)

{
  if ((DAT_04878800 & 1) == 0) {
    DAT_048787f0 = 0;
    DAT_048787f8 = 0;
    DAT_048787e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048787e0;
    DAT_048787e8 = &DAT_04675110;
    DAT_04878800 = 1;
  }
  return;
}


