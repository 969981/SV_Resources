/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036130; name: _INIT_788
 */


void _INIT_788(void)

{
  if ((DAT_04872b80 & 1) == 0) {
    DAT_04872b70 = 0;
    DAT_04872b78 = 0;
    DAT_04872b60 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872b60;
    DAT_04872b68 = &DAT_04649c58;
    DAT_04872b80 = 1;
  }
  return;
}


