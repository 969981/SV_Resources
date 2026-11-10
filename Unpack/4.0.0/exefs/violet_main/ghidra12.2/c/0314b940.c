/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0314b940; name: _INIT_1090
 */


void _INIT_1090(void)

{
  if ((DAT_04878c10 & 1) == 0) {
    DAT_04878c00 = 0;
    DAT_04878c08 = 0;
    DAT_04878bf0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878bf0;
    DAT_04878bf8 = &DAT_04676790;
    DAT_04878c10 = 1;
  }
  return;
}


