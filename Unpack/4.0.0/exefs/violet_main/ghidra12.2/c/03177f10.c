/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03177f10; name: _INIT_1346
 */


void _INIT_1346(void)

{
  if ((DAT_0487c0d8 & 1) == 0) {
    DAT_0487c0c8 = 0;
    DAT_0487c0d0 = 0;
    DAT_0487c0b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c0b8;
    DAT_0487c0c0 = &DAT_0468e180;
    DAT_0487c0d8 = 1;
  }
  return;
}


