/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0317c010; name: _INIT_1451
 */


void _INIT_1451(void)

{
  if ((DAT_0487d140 & 1) == 0) {
    DAT_0487d130 = 0;
    DAT_0487d138 = 0;
    DAT_0487d120 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d120;
    DAT_0487d128 = &DAT_04694ae0;
    DAT_0487d140 = 1;
  }
  return;
}


