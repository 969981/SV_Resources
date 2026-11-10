/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c7b0; name: _INIT_1116
 */


void _INIT_1116(void)

{
  if ((DAT_04879020 & 1) == 0) {
    DAT_04879010 = 0;
    DAT_04879018 = 0;
    DAT_04879000 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879000;
    DAT_04879008 = &DAT_04677e08;
    DAT_04879020 = 1;
  }
  return;
}


