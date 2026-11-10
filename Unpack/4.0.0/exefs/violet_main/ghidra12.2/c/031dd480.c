/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031dd480; name: _INIT_1608
 */


void _INIT_1608(void)

{
  if ((DAT_048844a0 & 1) == 0) {
    DAT_04884490 = 0;
    DAT_04884498 = 0;
    DAT_04884480 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884480;
    DAT_04884488 = &DAT_046a5be8;
    DAT_048844a0 = 1;
  }
  return;
}


