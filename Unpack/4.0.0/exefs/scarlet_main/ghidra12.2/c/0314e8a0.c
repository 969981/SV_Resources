/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e8a0; name: _INIT_1212
 */


void _INIT_1212(void)

{
  if ((DAT_04879f20 & 1) == 0) {
    DAT_04879f10 = 0;
    DAT_04879f18 = 0;
    DAT_04879f00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879f00;
    DAT_04879f08 = &DAT_0467dd98;
    DAT_04879f20 = 1;
  }
  return;
}


