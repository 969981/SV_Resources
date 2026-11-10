/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314eb20; name: _INIT_1220
 */


void _INIT_1220(void)

{
  if ((DAT_0487a060 & 1) == 0) {
    DAT_0487a050 = 0;
    DAT_0487a058 = 0;
    DAT_0487a040 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a040;
    DAT_0487a048 = &DAT_0467e598;
    DAT_0487a060 = 1;
  }
  return;
}


