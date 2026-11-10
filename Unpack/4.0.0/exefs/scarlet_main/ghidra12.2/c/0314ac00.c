/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ac00; name: _INIT_1065
 */


void _INIT_1065(void)

{
  if ((DAT_04878828 & 1) == 0) {
    DAT_04878818 = 0;
    DAT_04878820 = 0;
    DAT_04878808 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878808;
    DAT_04878810 = &DAT_046751c8;
    DAT_04878828 = 1;
  }
  return;
}


