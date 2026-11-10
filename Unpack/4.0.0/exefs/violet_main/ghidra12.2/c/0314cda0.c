/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314cda0; name: _INIT_1135
 */


void _INIT_1135(void)

{
  if ((DAT_04879318 & 1) == 0) {
    DAT_04879308 = 0;
    DAT_04879310 = 0;
    DAT_048792f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048792f8;
    DAT_04879300 = &DAT_04679148;
    DAT_04879318 = 1;
  }
  return;
}


