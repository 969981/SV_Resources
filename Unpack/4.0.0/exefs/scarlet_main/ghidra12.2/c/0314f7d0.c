/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f7d0; name: _INIT_1256
 */


void _INIT_1256(void)

{
  if ((DAT_0487a600 & 1) == 0) {
    DAT_0487a5f0 = 0;
    DAT_0487a5f8 = 0;
    DAT_0487a5e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a5e0;
    DAT_0487a5e8 = &DAT_04680628;
    DAT_0487a600 = 1;
  }
  return;
}


