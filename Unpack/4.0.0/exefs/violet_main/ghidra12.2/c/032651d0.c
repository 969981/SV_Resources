/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032651d0; name: _INIT_1872
 */


void _INIT_1872(void)

{
  if ((DAT_0488a428 & 1) == 0) {
    DAT_0488a418 = 0;
    DAT_0488a420 = 0;
    DAT_0488a408 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a408;
    DAT_0488a410 = &DAT_046c72e0;
    DAT_0488a428 = 1;
  }
  return;
}


