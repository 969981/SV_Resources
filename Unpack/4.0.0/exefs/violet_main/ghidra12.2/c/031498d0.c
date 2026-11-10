/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031498d0; name: _INIT_1016
 */


void _INIT_1016(void)

{
  if ((DAT_04878080 & 1) == 0) {
    DAT_04878070 = 0;
    DAT_04878078 = 0;
    DAT_04878060 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878060;
    DAT_04878068 = &DAT_046722c0;
    DAT_04878080 = 1;
  }
  return;
}


