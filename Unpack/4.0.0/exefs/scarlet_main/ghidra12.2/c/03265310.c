/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03265310; name: _INIT_1876
 */


void _INIT_1876(void)

{
  if ((DAT_0488a4c8 & 1) == 0) {
    DAT_0488a4b8 = 0;
    DAT_0488a4c0 = 0;
    DAT_0488a4a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a4a8;
    DAT_0488a4b0 = &DAT_046c77a8;
    DAT_0488a4c8 = 1;
  }
  return;
}


