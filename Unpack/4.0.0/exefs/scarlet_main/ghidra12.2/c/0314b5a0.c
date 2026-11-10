/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b5a0; name: _INIT_1085
 */


void _INIT_1085(void)

{
  if ((DAT_04878b48 & 1) == 0) {
    DAT_04878b38 = 0;
    DAT_04878b40 = 0;
    DAT_04878b28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878b28;
    DAT_04878b30 = &DAT_046762b8;
    DAT_04878b48 = 1;
  }
  return;
}


