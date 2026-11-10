/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a550; name: _INIT_1044
 */


void _INIT_1044(void)

{
  if ((DAT_048784e0 & 1) == 0) {
    DAT_048784d0 = 0;
    DAT_048784d8 = 0;
    DAT_048784c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048784c0;
    DAT_048784c8 = &DAT_04673d80;
    DAT_048784e0 = 1;
  }
  return;
}


