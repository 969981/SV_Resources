/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314baf0; name: _INIT_1095
 */


void _INIT_1095(void)

{
  if ((DAT_04878cd8 & 1) == 0) {
    DAT_04878cc8 = 0;
    DAT_04878cd0 = 0;
    DAT_04878cb8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878cb8;
    DAT_04878cc0 = &DAT_04676ba8;
    DAT_04878cd8 = 1;
  }
  return;
}


