/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030341a0; name: _INIT_687
 */


void _INIT_687(void)

{
  if ((DAT_04871bb8 & 1) == 0) {
    DAT_04871ba8 = 0;
    DAT_04871bb0 = 0;
    DAT_04871b98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871b98;
    DAT_04871ba0 = &DAT_04643410;
    DAT_04871bb8 = 1;
  }
  return;
}


