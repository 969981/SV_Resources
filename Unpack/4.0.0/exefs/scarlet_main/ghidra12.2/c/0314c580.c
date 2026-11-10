/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c580; name: _INIT_1109
 */


void _INIT_1109(void)

{
  if ((DAT_04878f08 & 1) == 0) {
    DAT_04878ef8 = 0;
    DAT_04878f00 = 0;
    DAT_04878ee8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878ee8;
    DAT_04878ef0 = &DAT_046777c0;
    DAT_04878f08 = 1;
  }
  return;
}


