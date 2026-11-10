/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314ac00; name: _INIT_1065
 */


void _INIT_1065(void)

{
  if ((DAT_04878828 & 1) == 0) {
    DAT_04878818 = 0;
    DAT_04878820 = 0;
    DAT_04878808 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878808;
    DAT_04878810 = &DAT_046751c8;
    DAT_04878828 = 1;
  }
  return;
}


