/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030332a0; name: _INIT_639
 */


void _INIT_639(void)

{
  if ((DAT_04871438 & 1) == 0) {
    DAT_04871428 = 0;
    DAT_04871430 = 0;
    DAT_04871418 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871418;
    DAT_04871420 = &DAT_046407b0;
    DAT_04871438 = 1;
  }
  return;
}


