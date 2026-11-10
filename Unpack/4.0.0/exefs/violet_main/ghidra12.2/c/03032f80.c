/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032f80; name: _INIT_629
 */


void _INIT_629(void)

{
  if ((DAT_048712a8 & 1) == 0) {
    DAT_04871298 = 0;
    DAT_048712a0 = 0;
    DAT_04871288 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871288;
    DAT_04871290 = &DAT_0463fed0;
    DAT_048712a8 = 1;
  }
  return;
}


