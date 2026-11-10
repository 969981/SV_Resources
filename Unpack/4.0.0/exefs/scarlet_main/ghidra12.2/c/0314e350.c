/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e350; name: _INIT_1195
 */


void _INIT_1195(void)

{
  if ((DAT_04879c78 & 1) == 0) {
    DAT_04879c68 = 0;
    DAT_04879c70 = 0;
    DAT_04879c58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879c58;
    DAT_04879c60 = &DAT_0467cb80;
    DAT_04879c78 = 1;
  }
  return;
}


