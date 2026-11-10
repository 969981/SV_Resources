/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314b070; name: _INIT_1074
 */


void _INIT_1074(void)

{
  if ((DAT_04878990 & 1) == 0) {
    DAT_04878980 = 0;
    DAT_04878988 = 0;
    DAT_04878970 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878970;
    DAT_04878978 = &DAT_04675948;
    DAT_04878990 = 1;
  }
  return;
}


