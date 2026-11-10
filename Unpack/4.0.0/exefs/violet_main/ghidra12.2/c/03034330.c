/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034330; name: _INIT_692
 */


void _INIT_692(void)

{
  if ((DAT_04871c80 & 1) == 0) {
    DAT_04871c70 = 0;
    DAT_04871c78 = 0;
    DAT_04871c60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871c60;
    DAT_04871c68 = &DAT_046438c0;
    DAT_04871c80 = 1;
  }
  return;
}


