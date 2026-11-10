/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03179a80; name: _INIT_1414
 */


void _INIT_1414(void)

{
  if ((DAT_0487cb78 & 1) == 0) {
    DAT_0487cb68 = 0;
    DAT_0487cb70 = 0;
    DAT_0487cb58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cb58;
    DAT_0487cb60 = &DAT_04692a20;
    DAT_0487cb78 = 1;
  }
  return;
}


