/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030310a0; name: _INIT_530
 */


void _INIT_530(void)

{
  if ((DAT_04870340 & 1) == 0) {
    DAT_04870330 = 0;
    DAT_04870338 = 0;
    DAT_04870320 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870320;
    DAT_04870328 = &DAT_0463a040;
    DAT_04870340 = 1;
  }
  return;
}


