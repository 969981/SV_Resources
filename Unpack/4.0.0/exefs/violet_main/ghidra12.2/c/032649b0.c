/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 032649b0; name: _INIT_1846
 */


void _INIT_1846(void)

{
  if ((DAT_0488a018 & 1) == 0) {
    DAT_0488a008 = 0;
    DAT_0488a010 = 0;
    DAT_04889ff8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889ff8;
    DAT_0488a000 = &DAT_046c5660;
    DAT_0488a018 = 1;
  }
  return;
}


