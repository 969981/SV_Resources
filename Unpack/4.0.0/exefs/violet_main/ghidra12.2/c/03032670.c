/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032670; name: _INIT_600
 */


void _INIT_600(void)

{
  if ((DAT_04870e20 & 1) == 0) {
    DAT_04870e10 = 0;
    DAT_04870e18 = 0;
    DAT_04870e00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870e00;
    DAT_04870e08 = &DAT_0463e2f8;
    DAT_04870e20 = 1;
  }
  return;
}


