/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035230; name: _INIT_740
 */


void _INIT_740(void)

{
  if ((DAT_04872400 & 1) == 0) {
    DAT_048723f0 = 0;
    DAT_048723f8 = 0;
    DAT_048723e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048723e0;
    DAT_048723e8 = &DAT_04646708;
    DAT_04872400 = 1;
  }
  return;
}


