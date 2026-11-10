/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034bf0; name: _INIT_720
 */


void _INIT_720(void)

{
  if ((DAT_048720e0 & 1) == 0) {
    DAT_048720d0 = 0;
    DAT_048720d8 = 0;
    DAT_048720c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048720c0;
    DAT_048720c8 = &DAT_04645578;
    DAT_048720e0 = 1;
  }
  return;
}


