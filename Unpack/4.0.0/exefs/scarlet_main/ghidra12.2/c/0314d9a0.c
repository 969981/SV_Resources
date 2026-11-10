/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d9a0; name: _INIT_1164
 */


void _INIT_1164(void)

{
  if ((DAT_048797a0 & 1) == 0) {
    DAT_04879790 = 0;
    DAT_04879798 = 0;
    DAT_04879780 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879780;
    DAT_04879788 = &DAT_0467ad50;
    DAT_048797a0 = 1;
  }
  return;
}


