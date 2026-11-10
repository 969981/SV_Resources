/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032350; name: _INIT_590
 */


void _INIT_590(void)

{
  if ((DAT_04870c90 & 1) == 0) {
    DAT_04870c80 = 0;
    DAT_04870c88 = 0;
    DAT_04870c70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870c70;
    DAT_04870c78 = &DAT_0463d9b8;
    DAT_04870c90 = 1;
  }
  return;
}


