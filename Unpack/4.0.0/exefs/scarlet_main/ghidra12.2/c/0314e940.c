/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e940; name: _INIT_1214
 */


void _INIT_1214(void)

{
  if ((DAT_04879f70 & 1) == 0) {
    DAT_04879f60 = 0;
    DAT_04879f68 = 0;
    DAT_04879f50 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879f50;
    DAT_04879f58 = &DAT_0467df88;
    DAT_04879f70 = 1;
  }
  return;
}


