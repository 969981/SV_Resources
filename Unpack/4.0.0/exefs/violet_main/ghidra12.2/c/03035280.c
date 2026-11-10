/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035280; name: _INIT_741
 */


void _INIT_741(void)

{
  if ((DAT_04872428 & 1) == 0) {
    DAT_04872418 = 0;
    DAT_04872420 = 0;
    DAT_04872408 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872408;
    DAT_04872410 = &DAT_046467e8;
    DAT_04872428 = 1;
  }
  return;
}


