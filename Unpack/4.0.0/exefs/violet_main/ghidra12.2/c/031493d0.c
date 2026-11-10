/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031493d0; name: _INIT_1000
 */


void _INIT_1000(void)

{
  if ((DAT_04877e00 & 1) == 0) {
    DAT_04877df0 = 0;
    DAT_04877df8 = 0;
    DAT_04877de0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877de0;
    DAT_04877de8 = &DAT_04671038;
    DAT_04877e00 = 1;
  }
  return;
}


