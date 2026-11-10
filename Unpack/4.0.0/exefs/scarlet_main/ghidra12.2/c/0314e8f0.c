/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e8f0; name: _INIT_1213
 */


void _INIT_1213(void)

{
  if ((DAT_04879f48 & 1) == 0) {
    DAT_04879f38 = 0;
    DAT_04879f40 = 0;
    DAT_04879f28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879f28;
    DAT_04879f30 = &DAT_0467de90;
    DAT_04879f48 = 1;
  }
  return;
}


