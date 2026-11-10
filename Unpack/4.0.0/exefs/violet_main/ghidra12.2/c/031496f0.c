/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031496f0; name: _INIT_1010
 */


void _INIT_1010(void)

{
  if ((DAT_04877f90 & 1) == 0) {
    DAT_04877f80 = 0;
    DAT_04877f88 = 0;
    DAT_04877f70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877f70;
    DAT_04877f78 = &DAT_04671bd0;
    DAT_04877f90 = 1;
  }
  return;
}


