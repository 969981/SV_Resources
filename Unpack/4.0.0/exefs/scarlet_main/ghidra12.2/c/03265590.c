/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03265590; name: _INIT_1884
 */


void _INIT_1884(void)

{
  if ((DAT_0488a608 & 1) == 0) {
    DAT_0488a5f8 = 0;
    DAT_0488a600 = 0;
    DAT_0488a5e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a5e8;
    DAT_0488a5f0 = &DAT_046c8198;
    DAT_0488a608 = 1;
  }
  return;
}


