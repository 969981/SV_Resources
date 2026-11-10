/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035a00; name: _INIT_765
 */


void _INIT_765(void)

{
  if ((DAT_048727e8 & 1) == 0) {
    DAT_048727d8 = 0;
    DAT_048727e0 = 0;
    DAT_048727c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048727c8;
    DAT_048727d0 = &DAT_046480d8;
    DAT_048727e8 = 1;
  }
  return;
}


