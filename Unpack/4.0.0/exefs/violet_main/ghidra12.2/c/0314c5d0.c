/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c5d0; name: _INIT_1110
 */


void _INIT_1110(void)

{
  if ((DAT_04878f30 & 1) == 0) {
    DAT_04878f20 = 0;
    DAT_04878f28 = 0;
    DAT_04878f10 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878f10;
    DAT_04878f18 = &DAT_04677878;
    DAT_04878f30 = 1;
  }
  return;
}


