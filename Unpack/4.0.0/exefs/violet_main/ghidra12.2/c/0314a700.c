/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314a700; name: _INIT_1049
 */


void _INIT_1049(void)

{
  if ((DAT_048785a8 & 1) == 0) {
    DAT_04878598 = 0;
    DAT_048785a0 = 0;
    DAT_04878588 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878588;
    DAT_04878590 = &DAT_04674258;
    DAT_048785a8 = 1;
  }
  return;
}


