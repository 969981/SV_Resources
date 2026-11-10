/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0318edd0; name: _INIT_1486
 */


void _INIT_1486(void)

{
  if ((DAT_0487d8f0 & 1) == 0) {
    DAT_0487d8e0 = 0;
    DAT_0487d8e8 = 0;
    DAT_0487d8d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d8d0;
    DAT_0487d8d8 = &DAT_04699018;
    DAT_0487d8f0 = 1;
  }
  return;
}


