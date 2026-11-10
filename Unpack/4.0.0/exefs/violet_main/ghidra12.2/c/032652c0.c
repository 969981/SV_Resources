/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032652c0; name: _INIT_1875
 */


void _INIT_1875(void)

{
  if ((DAT_0488a4a0 & 1) == 0) {
    DAT_0488a490 = 0;
    DAT_0488a498 = 0;
    DAT_0488a480 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a480;
    DAT_0488a488 = &DAT_046c7660;
    DAT_0488a4a0 = 1;
  }
  return;
}


