/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035eb0; name: _INIT_780
 */


void _INIT_780(void)

{
  if ((DAT_04872a40 & 1) == 0) {
    DAT_04872a30 = 0;
    DAT_04872a38 = 0;
    DAT_04872a20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872a20;
    DAT_04872a28 = &DAT_04649270;
    DAT_04872a40 = 1;
  }
  return;
}


