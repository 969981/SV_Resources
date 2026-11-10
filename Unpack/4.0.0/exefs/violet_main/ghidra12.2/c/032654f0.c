/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032654f0; name: _INIT_1882
 */


void _INIT_1882(void)

{
  if ((DAT_0488a5b8 & 1) == 0) {
    DAT_0488a5a8 = 0;
    DAT_0488a5b0 = 0;
    DAT_0488a598 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a598;
    DAT_0488a5a0 = &DAT_046c7f30;
    DAT_0488a5b8 = 1;
  }
  return;
}


