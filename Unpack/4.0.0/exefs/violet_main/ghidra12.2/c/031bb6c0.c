/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 031bb6c0; name: _INIT_1560
 */


void _INIT_1560(void)

{
  if ((DAT_04882f60 & 1) == 0) {
    DAT_04882f50 = 0;
    DAT_04882f58 = 0;
    DAT_04882f40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04882f40;
    DAT_04882f48 = &DAT_046a30b0;
    DAT_04882f60 = 1;
  }
  return;
}


