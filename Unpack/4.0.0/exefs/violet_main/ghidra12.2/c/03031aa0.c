/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031aa0; name: _INIT_562
 */


void _INIT_562(void)

{
  if ((DAT_04870840 & 1) == 0) {
    DAT_04870830 = 0;
    DAT_04870838 = 0;
    DAT_04870820 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870820;
    DAT_04870828 = &DAT_0463be18;
    DAT_04870840 = 1;
  }
  return;
}


