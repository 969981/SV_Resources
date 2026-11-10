/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035640; name: _INIT_753
 */


void _INIT_753(void)

{
  if ((DAT_04872608 & 1) == 0) {
    DAT_048725f8 = 0;
    DAT_04872600 = 0;
    DAT_048725e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048725e8;
    DAT_048725f0 = &DAT_046473d0;
    DAT_04872608 = 1;
  }
  return;
}


