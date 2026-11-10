/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a200; name: _INIT_1040
 */


void _INIT_1040(void)

{
  if ((DAT_04878440 & 1) == 0) {
    DAT_04878430 = 0;
    DAT_04878438 = 0;
    DAT_04878420 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878420;
    DAT_04878428 = &DAT_04673a28;
    DAT_04878440 = 1;
  }
  return;
}


