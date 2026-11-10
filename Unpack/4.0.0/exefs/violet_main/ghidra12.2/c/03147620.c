/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147620; name: _INIT_928
 */


void _INIT_928(void)

{
  if ((DAT_048772c0 & 1) == 0) {
    DAT_048772b0 = 0;
    DAT_048772b8 = 0;
    DAT_048772a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048772a0;
    DAT_048772a8 = &DAT_0466cae0;
    DAT_048772c0 = 1;
  }
  return;
}


