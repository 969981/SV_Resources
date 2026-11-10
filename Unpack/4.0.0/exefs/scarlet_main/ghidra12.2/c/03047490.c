/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03047490; name: _INIT_827
 */


void _INIT_827(void)

{
  if ((DAT_04873170 & 1) == 0) {
    DAT_04873160 = 0;
    DAT_04873168 = 0;
    DAT_04873150 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873150;
    DAT_04873158 = &DAT_0464c268;
    DAT_04873170 = 1;
  }
  return;
}


