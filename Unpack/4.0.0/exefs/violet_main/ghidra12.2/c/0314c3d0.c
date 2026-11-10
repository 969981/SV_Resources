/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314c3d0; name: _INIT_1104
 */


void _INIT_1104(void)

{
  if ((DAT_04878e40 & 1) == 0) {
    DAT_04878e30 = 0;
    DAT_04878e38 = 0;
    DAT_04878e20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878e20;
    DAT_04878e28 = &DAT_046773a8;
    DAT_04878e40 = 1;
  }
  return;
}


