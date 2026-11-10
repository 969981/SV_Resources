/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c330; name: _INIT_1102
 */


void _INIT_1102(void)

{
  if ((DAT_04878df0 & 1) == 0) {
    DAT_04878de0 = 0;
    DAT_04878de8 = 0;
    DAT_04878dd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878dd0;
    DAT_04878dd8 = &DAT_04677168;
    DAT_04878df0 = 1;
  }
  return;
}


