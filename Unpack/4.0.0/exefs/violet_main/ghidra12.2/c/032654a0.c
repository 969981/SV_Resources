/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032654a0; name: _INIT_1881
 */


void _INIT_1881(void)

{
  if ((DAT_0488a590 & 1) == 0) {
    DAT_0488a580 = 0;
    DAT_0488a588 = 0;
    DAT_0488a570 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a570;
    DAT_0488a578 = &DAT_046c7de8;
    DAT_0488a590 = 1;
  }
  return;
}


