/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03265590; name: _INIT_1884
 */


void _INIT_1884(void)

{
  if ((DAT_0488a608 & 1) == 0) {
    DAT_0488a5f8 = 0;
    DAT_0488a600 = 0;
    DAT_0488a5e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a5e8;
    DAT_0488a5f0 = &DAT_046c8198;
    DAT_0488a608 = 1;
  }
  return;
}


