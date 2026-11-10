/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314bdc0; name: _INIT_1099
 */


void _INIT_1099(void)

{
  if ((DAT_04878d78 & 1) == 0) {
    DAT_04878d68 = 0;
    DAT_04878d70 = 0;
    DAT_04878d58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878d58;
    DAT_04878d60 = &DAT_04676ed0;
    DAT_04878d78 = 1;
  }
  return;
}


