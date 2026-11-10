/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03036090; name: _INIT_786
 */


void _INIT_786(void)

{
  if ((DAT_04872b30 & 1) == 0) {
    DAT_04872b20 = 0;
    DAT_04872b28 = 0;
    DAT_04872b10 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872b10;
    DAT_04872b18 = &DAT_04649a40;
    DAT_04872b30 = 1;
  }
  return;
}


