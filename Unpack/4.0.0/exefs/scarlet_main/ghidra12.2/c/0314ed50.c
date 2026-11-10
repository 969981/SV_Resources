/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ed50; name: _INIT_1227
 */


void _INIT_1227(void)

{
  if ((DAT_0487a178 & 1) == 0) {
    DAT_0487a168 = 0;
    DAT_0487a170 = 0;
    DAT_0487a158 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a158;
    DAT_0487a160 = &DAT_0467ece8;
    DAT_0487a178 = 1;
  }
  return;
}


