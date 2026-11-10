/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145f40; name: _INIT_880
 */


void _INIT_880(void)

{
  if ((DAT_04876b40 & 1) == 0) {
    DAT_04876b30 = 0;
    DAT_04876b38 = 0;
    DAT_04876b20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876b20;
    DAT_04876b28 = &DAT_04669ef8;
    DAT_04876b40 = 1;
  }
  return;
}


