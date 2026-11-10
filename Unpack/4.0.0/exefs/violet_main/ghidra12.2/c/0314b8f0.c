/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314b8f0; name: _INIT_1089
 */


void _INIT_1089(void)

{
  if ((DAT_04878be8 & 1) == 0) {
    DAT_04878bd8 = 0;
    DAT_04878be0 = 0;
    DAT_04878bc8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878bc8;
    DAT_04878bd0 = &DAT_04676670;
    DAT_04878be8 = 1;
  }
  return;
}


