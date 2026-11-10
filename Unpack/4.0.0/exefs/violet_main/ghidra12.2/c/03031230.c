/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03031230; name: _INIT_535
 */


void _INIT_535(void)

{
  if ((DAT_04870408 & 1) == 0) {
    DAT_048703f8 = 0;
    DAT_04870400 = 0;
    DAT_048703e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048703e8;
    DAT_048703f0 = &DAT_0463a4d0;
    DAT_04870408 = 1;
  }
  return;
}


