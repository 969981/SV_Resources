/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 030352d0; name: _INIT_742
 */


void _INIT_742(void)

{
  if ((DAT_04872450 & 1) == 0) {
    DAT_04872440 = 0;
    DAT_04872448 = 0;
    DAT_04872430 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872430;
    DAT_04872438 = &DAT_046468c8;
    DAT_04872450 = 1;
  }
  return;
}


