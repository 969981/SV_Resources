/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bb580; name: _INIT_1556
 */


void _INIT_1556(void)

{
  if ((DAT_04882ec0 & 1) == 0) {
    DAT_04882eb0 = 0;
    DAT_04882eb8 = 0;
    DAT_04882ea0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04882ea0;
    DAT_04882ea8 = &DAT_046a2c90;
    DAT_04882ec0 = 1;
  }
  return;
}


