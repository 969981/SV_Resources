/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032da0; name: _INIT_623
 */


void _INIT_623(void)

{
  if ((DAT_048711b8 & 1) == 0) {
    DAT_048711a8 = 0;
    DAT_048711b0 = 0;
    DAT_04871198 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871198;
    DAT_048711a0 = &DAT_0463f970;
    DAT_048711b8 = 1;
  }
  return;
}


