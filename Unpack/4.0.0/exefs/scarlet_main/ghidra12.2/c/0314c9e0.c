/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c9e0; name: _INIT_1123
 */


void _INIT_1123(void)

{
  if ((DAT_04879138 & 1) == 0) {
    DAT_04879128 = 0;
    DAT_04879130 = 0;
    DAT_04879118 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879118;
    DAT_04879120 = &DAT_04678508;
    DAT_04879138 = 1;
  }
  return;
}


