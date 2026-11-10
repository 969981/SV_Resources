/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03145950; name: _INIT_861
 */


void _INIT_861(void)

{
  if ((DAT_04876848 & 1) == 0) {
    DAT_04876838 = 0;
    DAT_04876840 = 0;
    DAT_04876828 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876828;
    DAT_04876830 = &DAT_04668d88;
    DAT_04876848 = 1;
  }
  return;
}


