/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314c3d0; name: _INIT_1104
 */


void _INIT_1104(void)

{
  if ((DAT_04878e40 & 1) == 0) {
    DAT_04878e30 = 0;
    DAT_04878e38 = 0;
    DAT_04878e20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878e20;
    DAT_04878e28 = &DAT_046773a8;
    DAT_04878e40 = 1;
  }
  return;
}


