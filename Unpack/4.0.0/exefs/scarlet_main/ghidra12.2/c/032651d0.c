/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032651d0; name: _INIT_1872
 */


void _INIT_1872(void)

{
  if ((DAT_0488a428 & 1) == 0) {
    DAT_0488a418 = 0;
    DAT_0488a420 = 0;
    DAT_0488a408 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a408;
    DAT_0488a410 = &DAT_046c72e0;
    DAT_0488a428 = 1;
  }
  return;
}


