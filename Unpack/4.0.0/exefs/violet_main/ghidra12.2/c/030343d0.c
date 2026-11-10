/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030343d0; name: _INIT_694
 */


void _INIT_694(void)

{
  if ((DAT_04871cd0 & 1) == 0) {
    DAT_04871cc0 = 0;
    DAT_04871cc8 = 0;
    DAT_04871cb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871cb0;
    DAT_04871cb8 = &DAT_04643a88;
    DAT_04871cd0 = 1;
  }
  return;
}


