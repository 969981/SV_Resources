/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03147040; name: _INIT_919
 */


void _INIT_919(void)

{
  if ((DAT_04877158 & 1) == 0) {
    DAT_04877148 = 0;
    DAT_04877150 = 0;
    DAT_04877138 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877138;
    DAT_04877140 = &DAT_0466c1f8;
    DAT_04877158 = 1;
  }
  return;
}


