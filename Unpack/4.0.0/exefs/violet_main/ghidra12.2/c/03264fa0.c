/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03264fa0; name: _INIT_1865
 */


void _INIT_1865(void)

{
  if ((DAT_0488a310 & 1) == 0) {
    DAT_0488a300 = 0;
    DAT_0488a308 = 0;
    DAT_0488a2f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a2f0;
    DAT_0488a2f8 = &DAT_046c6b60;
    DAT_0488a310 = 1;
  }
  return;
}


