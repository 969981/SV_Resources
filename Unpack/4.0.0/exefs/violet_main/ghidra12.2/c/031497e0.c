/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031497e0; name: _INIT_1013
 */


void _INIT_1013(void)

{
  if ((DAT_04878008 & 1) == 0) {
    DAT_04877ff8 = 0;
    DAT_04878000 = 0;
    DAT_04877fe8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877fe8;
    DAT_04877ff0 = &DAT_04671ef0;
    DAT_04878008 = 1;
  }
  return;
}


