/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f8c0; name: _INIT_1259
 */


void _INIT_1259(void)

{
  if ((DAT_0487a678 & 1) == 0) {
    DAT_0487a668 = 0;
    DAT_0487a670 = 0;
    DAT_0487a658 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a658;
    DAT_0487a660 = &DAT_04680950;
    DAT_0487a678 = 1;
  }
  return;
}


