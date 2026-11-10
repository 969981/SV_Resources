/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c490; name: _INIT_1106
 */


void _INIT_1106(void)

{
  if ((DAT_04878e90 & 1) == 0) {
    DAT_04878e80 = 0;
    DAT_04878e88 = 0;
    DAT_04878e70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878e70;
    DAT_04878e78 = &DAT_04677520;
    DAT_04878e90 = 1;
  }
  return;
}


