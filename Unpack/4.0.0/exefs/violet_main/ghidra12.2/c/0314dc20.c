/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314dc20; name: _INIT_1172
 */


void _INIT_1172(void)

{
  if ((DAT_048798e0 & 1) == 0) {
    DAT_048798d0 = 0;
    DAT_048798d8 = 0;
    DAT_048798c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048798c0;
    DAT_048798c8 = &DAT_0467b5b0;
    DAT_048798e0 = 1;
  }
  return;
}


