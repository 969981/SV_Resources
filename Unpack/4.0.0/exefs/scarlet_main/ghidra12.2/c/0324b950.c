/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b950; name: _INIT_1783
 */


void _INIT_1783(void)

{
  if ((DAT_04888c90 & 1) == 0) {
    DAT_04888c80 = 0;
    DAT_04888c88 = 0;
    DAT_04888c70 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888c70;
    DAT_04888c78 = &DAT_046bd698;
    DAT_04888c90 = 1;
  }
  return;
}


