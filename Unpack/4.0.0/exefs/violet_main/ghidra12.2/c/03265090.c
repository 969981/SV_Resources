/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03265090; name: _INIT_1868
 */


void _INIT_1868(void)

{
  if ((DAT_0488a388 & 1) == 0) {
    DAT_0488a378 = 0;
    DAT_0488a380 = 0;
    DAT_0488a368 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a368;
    DAT_0488a370 = &DAT_046c6ea8;
    DAT_0488a388 = 1;
  }
  return;
}


