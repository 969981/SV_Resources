/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0320e8a0; name: _INIT_1646
 */


void _INIT_1646(void)

{
  if ((DAT_04884f98 & 1) == 0) {
    DAT_04884f88 = 0;
    DAT_04884f90 = 0;
    DAT_04884f78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884f78;
    DAT_04884f80 = &DAT_046a9088;
    DAT_04884f98 = 1;
  }
  return;
}


