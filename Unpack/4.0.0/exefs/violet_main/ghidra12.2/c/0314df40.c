/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314df40; name: _INIT_1182
 */


void _INIT_1182(void)

{
  if ((DAT_04879a70 & 1) == 0) {
    DAT_04879a60 = 0;
    DAT_04879a68 = 0;
    DAT_04879a50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879a50;
    DAT_04879a58 = &DAT_0467be80;
    DAT_04879a70 = 1;
  }
  return;
}


