/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178050; name: _INIT_1350
 */


void _INIT_1350(void)

{
  if ((DAT_0487c178 & 1) == 0) {
    DAT_0487c168 = 0;
    DAT_0487c170 = 0;
    DAT_0487c158 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c158;
    DAT_0487c160 = &DAT_0468e620;
    DAT_0487c178 = 1;
  }
  return;
}


