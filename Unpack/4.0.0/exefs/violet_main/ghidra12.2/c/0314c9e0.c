/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c9e0; name: _INIT_1123
 */


void _INIT_1123(void)

{
  if ((DAT_04879138 & 1) == 0) {
    DAT_04879128 = 0;
    DAT_04879130 = 0;
    DAT_04879118 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879118;
    DAT_04879120 = &DAT_04678508;
    DAT_04879138 = 1;
  }
  return;
}


