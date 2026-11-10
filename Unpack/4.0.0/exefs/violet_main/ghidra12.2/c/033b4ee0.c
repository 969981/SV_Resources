/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b4ee0; name: _INIT_2078
 */


void _INIT_2078(void)

{
  if ((DAT_0488e5b8 & 1) == 0) {
    DAT_0488e5a8 = 0;
    DAT_0488e5b0 = 0;
    DAT_0488e598 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e598;
    DAT_0488e5a0 = &DAT_047b44c8;
    DAT_0488e5b8 = 1;
  }
  return;
}


