/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03149560; name: _INIT_1005
 */


void _INIT_1005(void)

{
  if ((DAT_04877ec8 & 1) == 0) {
    DAT_04877eb8 = 0;
    DAT_04877ec0 = 0;
    DAT_04877ea8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877ea8;
    DAT_04877eb0 = &DAT_046716d0;
    DAT_04877ec8 = 1;
  }
  return;
}


