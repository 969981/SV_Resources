/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030359b0; name: _INIT_764
 */


void _INIT_764(void)

{
  if ((DAT_048727c0 & 1) == 0) {
    DAT_048727b0 = 0;
    DAT_048727b8 = 0;
    DAT_048727a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048727a0;
    DAT_048727a8 = &DAT_04647fe0;
    DAT_048727c0 = 1;
  }
  return;
}


