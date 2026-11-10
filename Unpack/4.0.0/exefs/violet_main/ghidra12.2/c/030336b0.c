/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030336b0; name: _INIT_652
 */


void _INIT_652(void)

{
  if ((DAT_04871640 & 1) == 0) {
    DAT_04871630 = 0;
    DAT_04871638 = 0;
    DAT_04871620 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871620;
    DAT_04871628 = &DAT_046412e8;
    DAT_04871640 = 1;
  }
  return;
}


