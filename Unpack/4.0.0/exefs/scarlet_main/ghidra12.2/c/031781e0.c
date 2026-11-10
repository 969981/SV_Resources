/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031781e0; name: _INIT_1355
 */


void _INIT_1355(void)

{
  if ((DAT_0487c240 & 1) == 0) {
    DAT_0487c230 = 0;
    DAT_0487c238 = 0;
    DAT_0487c220 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c220;
    DAT_0487c228 = &DAT_0468eb98;
    DAT_0487c240 = 1;
  }
  return;
}


