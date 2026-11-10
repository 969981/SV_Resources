/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03032940; name: _INIT_609
 */


void _INIT_609(void)

{
  if ((DAT_04870f88 & 1) == 0) {
    DAT_04870f78 = 0;
    DAT_04870f80 = 0;
    DAT_04870f68 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870f68;
    DAT_04870f70 = &DAT_0463ebc8;
    DAT_04870f88 = 1;
  }
  return;
}


