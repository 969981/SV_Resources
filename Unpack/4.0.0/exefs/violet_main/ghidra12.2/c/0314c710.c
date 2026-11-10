/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c710; name: _INIT_1114
 */


void _INIT_1114(void)

{
  if ((DAT_04878fd0 & 1) == 0) {
    DAT_04878fc0 = 0;
    DAT_04878fc8 = 0;
    DAT_04878fb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878fb0;
    DAT_04878fb8 = &DAT_04677c18;
    DAT_04878fd0 = 1;
  }
  return;
}


