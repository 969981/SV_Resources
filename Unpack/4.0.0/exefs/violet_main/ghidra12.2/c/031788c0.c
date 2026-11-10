/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031788c0; name: _INIT_1377
 */


void _INIT_1377(void)

{
  if ((DAT_0487c5b0 & 1) == 0) {
    DAT_0487c5a0 = 0;
    DAT_0487c5a8 = 0;
    DAT_0487c590 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c590;
    DAT_0487c598 = &DAT_04690308;
    DAT_0487c5b0 = 1;
  }
  return;
}


