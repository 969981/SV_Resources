/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


