/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030367c0; name: _INIT_809
 */


void _INIT_809(void)

{
  if ((DAT_04872ec8 & 1) == 0) {
    DAT_04872eb8 = 0;
    DAT_04872ec0 = 0;
    DAT_04872ea8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872ea8;
    DAT_04872eb0 = &DAT_0464af90;
    DAT_04872ec8 = 1;
  }
  return;
}


