/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145ea0; name: _INIT_878
 */


void _INIT_878(void)

{
  if ((DAT_04876af0 & 1) == 0) {
    DAT_04876ae0 = 0;
    DAT_04876ae8 = 0;
    DAT_04876ad0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876ad0;
    DAT_04876ad8 = &DAT_04669c88;
    DAT_04876af0 = 1;
  }
  return;
}


