/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036e50; name: _INIT_824
 */


void _INIT_824(void)

{
  if ((DAT_04873120 & 1) == 0) {
    DAT_04873110 = 0;
    DAT_04873118 = 0;
    DAT_04873100 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873100;
    DAT_04873108 = &DAT_0464bee8;
    DAT_04873120 = 1;
  }
  return;
}


