/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149ab0; name: _INIT_1022
 */


void _INIT_1022(void)

{
  if ((DAT_04878170 & 1) == 0) {
    DAT_04878160 = 0;
    DAT_04878168 = 0;
    DAT_04878150 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878150;
    DAT_04878158 = &DAT_04672910;
    DAT_04878170 = 1;
  }
  return;
}


