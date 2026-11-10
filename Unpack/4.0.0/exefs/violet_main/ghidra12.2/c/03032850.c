/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032850; name: _INIT_606
 */


void _INIT_606(void)

{
  if ((DAT_04870f10 & 1) == 0) {
    DAT_04870f00 = 0;
    DAT_04870f08 = 0;
    DAT_04870ef0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870ef0;
    DAT_04870ef8 = &DAT_0463e8c0;
    DAT_04870f10 = 1;
  }
  return;
}


