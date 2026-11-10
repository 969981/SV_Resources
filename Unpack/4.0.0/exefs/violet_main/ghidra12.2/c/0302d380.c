/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0302d380; name: _INIT_518
 */


void _INIT_518(void)

{
  if ((DAT_04870160 & 1) == 0) {
    DAT_04870150 = 0;
    DAT_04870158 = 0;
    DAT_04870140 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870140;
    DAT_04870148 = &DAT_046395e8;
    DAT_04870160 = 1;
  }
  return;
}


