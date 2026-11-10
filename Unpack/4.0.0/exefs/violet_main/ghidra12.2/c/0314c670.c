/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c670; name: _INIT_1112
 */


void _INIT_1112(void)

{
  if ((DAT_04878f80 & 1) == 0) {
    DAT_04878f70 = 0;
    DAT_04878f78 = 0;
    DAT_04878f60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878f60;
    DAT_04878f68 = &DAT_04677a68;
    DAT_04878f80 = 1;
  }
  return;
}


