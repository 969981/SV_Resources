/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030310f0; name: _INIT_531
 */


void _INIT_531(void)

{
  if ((DAT_04870368 & 1) == 0) {
    DAT_04870358 = 0;
    DAT_04870360 = 0;
    DAT_04870348 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870348;
    DAT_04870350 = &DAT_0463a1b8;
    DAT_04870368 = 1;
  }
  return;
}


