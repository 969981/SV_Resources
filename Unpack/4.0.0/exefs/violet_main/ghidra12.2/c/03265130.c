/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03265130; name: _INIT_1870
 */


void _INIT_1870(void)

{
  if ((DAT_0488a3d8 & 1) == 0) {
    DAT_0488a3c8 = 0;
    DAT_0488a3d0 = 0;
    DAT_0488a3b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a3b8;
    DAT_0488a3c0 = &DAT_046c70a8;
    DAT_0488a3d8 = 1;
  }
  return;
}


