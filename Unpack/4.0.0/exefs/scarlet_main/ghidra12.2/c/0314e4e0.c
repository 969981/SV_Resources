/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e4e0; name: _INIT_1200
 */


void _INIT_1200(void)

{
  if ((DAT_04879d40 & 1) == 0) {
    DAT_04879d30 = 0;
    DAT_04879d38 = 0;
    DAT_04879d20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879d20;
    DAT_04879d28 = &DAT_0467d100;
    DAT_04879d40 = 1;
  }
  return;
}


