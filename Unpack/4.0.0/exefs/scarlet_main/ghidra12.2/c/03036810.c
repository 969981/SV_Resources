/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036810; name: _INIT_810
 */


void _INIT_810(void)

{
  if ((DAT_04872ef0 & 1) == 0) {
    DAT_04872ee0 = 0;
    DAT_04872ee8 = 0;
    DAT_04872ed0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872ed0;
    DAT_04872ed8 = &DAT_0464b108;
    DAT_04872ef0 = 1;
  }
  return;
}


