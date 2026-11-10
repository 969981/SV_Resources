/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033701e0; name: _INIT_2054
 */


void _INIT_2054(void)

{
  if ((DAT_0488daf8 & 1) == 0) {
    DAT_0488dae8 = 0;
    DAT_0488daf0 = 0;
    DAT_0488dad8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488dad8;
    DAT_0488dae0 = &DAT_047adf38;
    DAT_0488daf8 = 1;
  }
  return;
}


