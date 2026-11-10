/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c800; name: _INIT_1117
 */


void _INIT_1117(void)

{
  if ((DAT_04879048 & 1) == 0) {
    DAT_04879038 = 0;
    DAT_04879040 = 0;
    DAT_04879028 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879028;
    DAT_04879030 = &DAT_04677f00;
    DAT_04879048 = 1;
  }
  return;
}


