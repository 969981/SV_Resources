/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030332f0; name: _INIT_640
 */


void _INIT_640(void)

{
  if ((DAT_04871460 & 1) == 0) {
    DAT_04871450 = 0;
    DAT_04871458 = 0;
    DAT_04871440 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871440;
    DAT_04871448 = &DAT_046408a8;
    DAT_04871460 = 1;
  }
  return;
}


