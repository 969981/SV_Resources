/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03148e80; name: _INIT_983
 */


void _INIT_983(void)

{
  if ((DAT_04877b58 & 1) == 0) {
    DAT_04877b48 = 0;
    DAT_04877b50 = 0;
    DAT_04877b38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877b38;
    DAT_04877b40 = &DAT_04670078;
    DAT_04877b58 = 1;
  }
  return;
}


