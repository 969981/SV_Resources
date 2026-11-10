/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c380; name: _INIT_1103
 */


void _INIT_1103(void)

{
  if ((DAT_04878e18 & 1) == 0) {
    DAT_04878e08 = 0;
    DAT_04878e10 = 0;
    DAT_04878df8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878df8;
    DAT_04878e00 = &DAT_04677288;
    DAT_04878e18 = 1;
  }
  return;
}


