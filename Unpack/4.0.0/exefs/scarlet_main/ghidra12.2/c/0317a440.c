/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a440; name: _INIT_1421
 */


void _INIT_1421(void)

{
  if ((DAT_0487cc90 & 1) == 0) {
    DAT_0487cc80 = 0;
    DAT_0487cc88 = 0;
    DAT_0487cc70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cc70;
    DAT_0487cc78 = &DAT_04693010;
    DAT_0487cc90 = 1;
  }
  return;
}


