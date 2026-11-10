/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03265270; name: _INIT_1874
 */


void _INIT_1874(void)

{
  if ((DAT_0488a478 & 1) == 0) {
    DAT_0488a468 = 0;
    DAT_0488a470 = 0;
    DAT_0488a458 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a458;
    DAT_0488a460 = &DAT_046c7518;
    DAT_0488a478 = 1;
  }
  return;
}


