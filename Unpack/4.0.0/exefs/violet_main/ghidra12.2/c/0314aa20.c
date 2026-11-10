/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314aa20; name: _INIT_1059
 */


void _INIT_1059(void)

{
  if ((DAT_04878738 & 1) == 0) {
    DAT_04878728 = 0;
    DAT_04878730 = 0;
    DAT_04878718 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878718;
    DAT_04878720 = &DAT_04674c68;
    DAT_04878738 = 1;
  }
  return;
}


