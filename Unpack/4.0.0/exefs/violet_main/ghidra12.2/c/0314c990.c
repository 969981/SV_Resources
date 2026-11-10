/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c990; name: _INIT_1122
 */


void _INIT_1122(void)

{
  if ((DAT_04879110 & 1) == 0) {
    DAT_04879100 = 0;
    DAT_04879108 = 0;
    DAT_048790f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048790f0;
    DAT_048790f8 = &DAT_04678428;
    DAT_04879110 = 1;
  }
  return;
}


