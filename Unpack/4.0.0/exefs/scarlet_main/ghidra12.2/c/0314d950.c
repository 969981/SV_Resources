/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d950; name: _INIT_1163
 */


void _INIT_1163(void)

{
  if ((DAT_04879778 & 1) == 0) {
    DAT_04879768 = 0;
    DAT_04879770 = 0;
    DAT_04879758 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879758;
    DAT_04879760 = &DAT_0467ac00;
    DAT_04879778 = 1;
  }
  return;
}


