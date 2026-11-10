/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033de0; name: _INIT_675
 */


void _INIT_675(void)

{
  if ((DAT_048719d8 & 1) == 0) {
    DAT_048719c8 = 0;
    DAT_048719d0 = 0;
    DAT_048719b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048719b8;
    DAT_048719c0 = &DAT_046428c0;
    DAT_048719d8 = 1;
  }
  return;
}


