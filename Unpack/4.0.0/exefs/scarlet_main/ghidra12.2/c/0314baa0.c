/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314baa0; name: _INIT_1094
 */


void _INIT_1094(void)

{
  if ((DAT_04878cb0 & 1) == 0) {
    DAT_04878ca0 = 0;
    DAT_04878ca8 = 0;
    DAT_04878c90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878c90;
    DAT_04878c98 = &DAT_04676ae8;
    DAT_04878cb0 = 1;
  }
  return;
}


