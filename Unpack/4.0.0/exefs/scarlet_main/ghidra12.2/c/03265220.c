/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03265220; name: _INIT_1873
 */


void _INIT_1873(void)

{
  if ((DAT_0488a450 & 1) == 0) {
    DAT_0488a440 = 0;
    DAT_0488a448 = 0;
    DAT_0488a430 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a430;
    DAT_0488a438 = &DAT_046c73d0;
    DAT_0488a450 = 1;
  }
  return;
}


