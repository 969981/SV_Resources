/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ee90; name: _INIT_1231
 */


void _INIT_1231(void)

{
  if ((DAT_0487a218 & 1) == 0) {
    DAT_0487a208 = 0;
    DAT_0487a210 = 0;
    DAT_0487a1f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a1f8;
    DAT_0487a200 = &DAT_0467f198;
    DAT_0487a218 = 1;
  }
  return;
}


