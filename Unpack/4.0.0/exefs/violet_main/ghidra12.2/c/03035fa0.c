/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035fa0; name: _INIT_783
 */


void _INIT_783(void)

{
  if ((DAT_04872ab8 & 1) == 0) {
    DAT_04872aa8 = 0;
    DAT_04872ab0 = 0;
    DAT_04872a98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872a98;
    DAT_04872aa0 = &DAT_04649658;
    DAT_04872ab8 = 1;
  }
  return;
}


