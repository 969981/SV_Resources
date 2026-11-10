/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03033430; name: _INIT_644
 */


void _INIT_644(void)

{
  if ((DAT_04871500 & 1) == 0) {
    DAT_048714f0 = 0;
    DAT_048714f8 = 0;
    DAT_048714e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048714e0;
    DAT_048714e8 = &DAT_04640bf0;
    DAT_04871500 = 1;
  }
  return;
}


