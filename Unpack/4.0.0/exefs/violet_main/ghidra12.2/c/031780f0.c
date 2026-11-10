/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031780f0; name: _INIT_1352
 */


void _INIT_1352(void)

{
  if ((DAT_0487c1c8 & 1) == 0) {
    DAT_0487c1b8 = 0;
    DAT_0487c1c0 = 0;
    DAT_0487c1a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c1a8;
    DAT_0487c1b0 = &DAT_0468e808;
    DAT_0487c1c8 = 1;
  }
  return;
}


