/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149ce0; name: _INIT_1029
 */


void _INIT_1029(void)

{
  if ((DAT_04878288 & 1) == 0) {
    DAT_04878278 = 0;
    DAT_04878280 = 0;
    DAT_04878268 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878268;
    DAT_04878270 = &DAT_04673038;
    DAT_04878288 = 1;
  }
  return;
}


