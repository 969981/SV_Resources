/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033b4d00; name: _INIT_2072
 */


void _INIT_2072(void)

{
  if ((DAT_0488e4c8 & 1) == 0) {
    DAT_0488e4b8 = 0;
    DAT_0488e4c0 = 0;
    DAT_0488e4a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e4a8;
    DAT_0488e4b0 = &DAT_047b3e00;
    DAT_0488e4c8 = 1;
  }
  return;
}


