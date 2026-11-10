/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034380; name: _INIT_693
 */


void _INIT_693(void)

{
  if ((DAT_04871ca8 & 1) == 0) {
    DAT_04871c98 = 0;
    DAT_04871ca0 = 0;
    DAT_04871c88 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871c88;
    DAT_04871c90 = &DAT_04643910;
    DAT_04871ca8 = 1;
  }
  return;
}


