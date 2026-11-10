/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c4e0; name: _INIT_1107
 */


void _INIT_1107(void)

{
  if ((DAT_04878eb8 & 1) == 0) {
    DAT_04878ea8 = 0;
    DAT_04878eb0 = 0;
    DAT_04878e98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878e98;
    DAT_04878ea0 = &DAT_04677640;
    DAT_04878eb8 = 1;
  }
  return;
}


