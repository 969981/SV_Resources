/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03034d80; name: _INIT_725
 */


void _INIT_725(void)

{
  if ((DAT_048721a8 & 1) == 0) {
    DAT_04872198 = 0;
    DAT_048721a0 = 0;
    DAT_04872188 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872188;
    DAT_04872190 = &DAT_04645a50;
    DAT_048721a8 = 1;
  }
  return;
}


