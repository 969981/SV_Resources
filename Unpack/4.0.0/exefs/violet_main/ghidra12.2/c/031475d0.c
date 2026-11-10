/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031475d0; name: _INIT_927
 */


void _INIT_927(void)

{
  if ((DAT_04877298 & 1) == 0) {
    DAT_04877288 = 0;
    DAT_04877290 = 0;
    DAT_04877278 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877278;
    DAT_04877280 = &DAT_0466c9c0;
    DAT_04877298 = 1;
  }
  return;
}


