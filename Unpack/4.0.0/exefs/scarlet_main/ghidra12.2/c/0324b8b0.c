/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b8b0; name: _INIT_1781
 */


void _INIT_1781(void)

{
  if ((DAT_04888c40 & 1) == 0) {
    DAT_04888c30 = 0;
    DAT_04888c38 = 0;
    DAT_04888c20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888c20;
    DAT_04888c28 = &DAT_046bd448;
    DAT_04888c40 = 1;
  }
  return;
}


