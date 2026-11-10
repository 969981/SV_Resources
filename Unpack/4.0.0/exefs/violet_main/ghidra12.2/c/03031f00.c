/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031f00; name: _INIT_576
 */


void _INIT_576(void)

{
  if ((DAT_04870a70 & 1) == 0) {
    DAT_04870a60 = 0;
    DAT_04870a68 = 0;
    DAT_04870a50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870a50;
    DAT_04870a58 = &DAT_0463cc98;
    DAT_04870a70 = 1;
  }
  return;
}


