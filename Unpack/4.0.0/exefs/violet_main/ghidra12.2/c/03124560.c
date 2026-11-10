/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03124560; name: _INIT_848
 */


void _INIT_848(void)

{
  if ((DAT_048735b0 & 1) == 0) {
    DAT_048735a0 = 0;
    DAT_048735a8 = 0;
    DAT_04873590 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873590;
    DAT_04873598 = &DAT_0464fcc8;
    DAT_048735b0 = 1;
  }
  return;
}


