/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032300; name: _INIT_589
 */


void _INIT_589(void)

{
  if ((DAT_04870c68 & 1) == 0) {
    DAT_04870c58 = 0;
    DAT_04870c60 = 0;
    DAT_04870c48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870c48;
    DAT_04870c50 = &DAT_0463d8a8;
    DAT_04870c68 = 1;
  }
  return;
}


