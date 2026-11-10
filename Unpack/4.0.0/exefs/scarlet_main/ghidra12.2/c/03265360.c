/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03265360; name: _INIT_1877
 */


void _INIT_1877(void)

{
  if ((DAT_0488a4f0 & 1) == 0) {
    DAT_0488a4e0 = 0;
    DAT_0488a4e8 = 0;
    DAT_0488a4d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a4d0;
    DAT_0488a4d8 = &DAT_046c78f0;
    DAT_0488a4f0 = 1;
  }
  return;
}


