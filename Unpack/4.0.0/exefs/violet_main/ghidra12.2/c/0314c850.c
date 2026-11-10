/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c850; name: _INIT_1118
 */


void _INIT_1118(void)

{
  if ((DAT_04879070 & 1) == 0) {
    DAT_04879060 = 0;
    DAT_04879068 = 0;
    DAT_04879050 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879050;
    DAT_04879058 = &DAT_04677ff8;
    DAT_04879070 = 1;
  }
  return;
}


