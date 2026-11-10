/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03035000; name: _INIT_733
 */


void _INIT_733(void)

{
  if ((DAT_048722e8 & 1) == 0) {
    DAT_048722d8 = 0;
    DAT_048722e0 = 0;
    DAT_048722c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048722c8;
    DAT_048722d0 = &DAT_04646148;
    DAT_048722e8 = 1;
  }
  return;
}


