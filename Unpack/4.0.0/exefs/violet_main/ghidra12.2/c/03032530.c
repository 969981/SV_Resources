/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032530; name: _INIT_596
 */


void _INIT_596(void)

{
  if ((DAT_04870d80 & 1) == 0) {
    DAT_04870d70 = 0;
    DAT_04870d78 = 0;
    DAT_04870d60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870d60;
    DAT_04870d68 = &DAT_0463df10;
    DAT_04870d80 = 1;
  }
  return;
}


