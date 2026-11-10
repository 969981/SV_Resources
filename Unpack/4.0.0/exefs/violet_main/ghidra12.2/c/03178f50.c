/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03178f50; name: _INIT_1398
 */


void _INIT_1398(void)

{
  if ((DAT_0487c8f8 & 1) == 0) {
    DAT_0487c8e8 = 0;
    DAT_0487c8f0 = 0;
    DAT_0487c8d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c8d8;
    DAT_0487c8e0 = &DAT_04691b98;
    DAT_0487c8f8 = 1;
  }
  return;
}


