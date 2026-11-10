/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264e10; name: _INIT_1860
 */


void _INIT_1860(void)

{
  if ((DAT_0488a248 & 1) == 0) {
    DAT_0488a238 = 0;
    DAT_0488a240 = 0;
    DAT_0488a228 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a228;
    DAT_0488a230 = &DAT_046c63b8;
    DAT_0488a248 = 1;
  }
  return;
}


