/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b220; name: _INIT_1079
 */


void _INIT_1079(void)

{
  if ((DAT_04878a58 & 1) == 0) {
    DAT_04878a48 = 0;
    DAT_04878a50 = 0;
    DAT_04878a38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878a38;
    DAT_04878a40 = &DAT_04675d60;
    DAT_04878a58 = 1;
  }
  return;
}


