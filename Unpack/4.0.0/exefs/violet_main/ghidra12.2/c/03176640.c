/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03176640; name: _INIT_1311
 */


void _INIT_1311(void)

{
  if ((DAT_0487bb60 & 1) == 0) {
    DAT_0487bb50 = 0;
    DAT_0487bb58 = 0;
    DAT_0487bb40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bb40;
    DAT_0487bb48 = &DAT_0468bf40;
    DAT_0487bb60 = 1;
  }
  return;
}


