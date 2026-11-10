/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314df90; name: _INIT_1183
 */


void _INIT_1183(void)

{
  if ((DAT_04879a98 & 1) == 0) {
    DAT_04879a88 = 0;
    DAT_04879a90 = 0;
    DAT_04879a78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879a78;
    DAT_04879a80 = &DAT_0467bf58;
    DAT_04879a98 = 1;
  }
  return;
}


