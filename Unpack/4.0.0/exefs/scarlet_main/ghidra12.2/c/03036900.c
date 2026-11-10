/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036900; name: _INIT_813
 */


void _INIT_813(void)

{
  if ((DAT_04872f68 & 1) == 0) {
    DAT_04872f58 = 0;
    DAT_04872f60 = 0;
    DAT_04872f48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872f48;
    DAT_04872f50 = &DAT_0464b4d8;
    DAT_04872f68 = 1;
  }
  return;
}


