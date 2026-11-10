/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032300; name: _INIT_589
 */


void _INIT_589(void)

{
  if ((DAT_04870c68 & 1) == 0) {
    DAT_04870c58 = 0;
    DAT_04870c60 = 0;
    DAT_04870c48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870c48;
    DAT_04870c50 = &DAT_0463d8a8;
    DAT_04870c68 = 1;
  }
  return;
}


