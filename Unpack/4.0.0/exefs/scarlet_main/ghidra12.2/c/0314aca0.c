/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314aca0; name: _INIT_1067
 */


void _INIT_1067(void)

{
  if ((DAT_04878878 & 1) == 0) {
    DAT_04878868 = 0;
    DAT_04878870 = 0;
    DAT_04878858 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878858;
    DAT_04878860 = &DAT_046752c8;
    DAT_04878878 = 1;
  }
  return;
}


