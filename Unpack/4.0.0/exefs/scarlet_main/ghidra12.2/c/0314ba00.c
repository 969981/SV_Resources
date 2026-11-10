/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ba00; name: _INIT_1092
 */


void _INIT_1092(void)

{
  if ((DAT_04878c60 & 1) == 0) {
    DAT_04878c50 = 0;
    DAT_04878c58 = 0;
    DAT_04878c40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878c40;
    DAT_04878c48 = &DAT_04676908;
    DAT_04878c60 = 1;
  }
  return;
}


