/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033d40; name: _INIT_673
 */


void _INIT_673(void)

{
  if ((DAT_04871988 & 1) == 0) {
    DAT_04871978 = 0;
    DAT_04871980 = 0;
    DAT_04871968 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871968;
    DAT_04871970 = &DAT_046426d0;
    DAT_04871988 = 1;
  }
  return;
}


