/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032ee0; name: _INIT_627
 */


void _INIT_627(void)

{
  if ((DAT_04871258 & 1) == 0) {
    DAT_04871248 = 0;
    DAT_04871250 = 0;
    DAT_04871238 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871238;
    DAT_04871240 = &DAT_0463fce0;
    DAT_04871258 = 1;
  }
  return;
}


