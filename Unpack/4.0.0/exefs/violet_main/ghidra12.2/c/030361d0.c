/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030361d0; name: _INIT_790
 */


void _INIT_790(void)

{
  if ((DAT_04872bd0 & 1) == 0) {
    DAT_04872bc0 = 0;
    DAT_04872bc8 = 0;
    DAT_04872bb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872bb0;
    DAT_04872bb8 = &DAT_04649d98;
    DAT_04872bd0 = 1;
  }
  return;
}


