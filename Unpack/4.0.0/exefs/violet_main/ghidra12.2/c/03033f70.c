/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033f70; name: _INIT_680
 */


void _INIT_680(void)

{
  if ((DAT_04871aa0 & 1) == 0) {
    DAT_04871a90 = 0;
    DAT_04871a98 = 0;
    DAT_04871a80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871a80;
    DAT_04871a88 = &DAT_04642d70;
    DAT_04871aa0 = 1;
  }
  return;
}


