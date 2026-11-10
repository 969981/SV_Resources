/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a050; name: _INIT_1035
 */


void _INIT_1035(void)

{
  if ((DAT_04878378 & 1) == 0) {
    DAT_04878368 = 0;
    DAT_04878370 = 0;
    DAT_04878358 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878358;
    DAT_04878360 = &DAT_046735b0;
    DAT_04878378 = 1;
  }
  return;
}


