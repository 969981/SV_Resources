/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a890; name: _INIT_1054
 */


void _INIT_1054(void)

{
  if ((DAT_04878670 & 1) == 0) {
    DAT_04878660 = 0;
    DAT_04878668 = 0;
    DAT_04878650 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878650;
    DAT_04878658 = &DAT_04674740;
    DAT_04878670 = 1;
  }
  return;
}


