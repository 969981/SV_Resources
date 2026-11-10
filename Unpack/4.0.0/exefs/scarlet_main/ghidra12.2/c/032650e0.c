/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032650e0; name: _INIT_1869
 */


void _INIT_1869(void)

{
  if ((DAT_0488a3b0 & 1) == 0) {
    DAT_0488a3a0 = 0;
    DAT_0488a3a8 = 0;
    DAT_0488a390 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a390;
    DAT_0488a398 = &DAT_046c6f60;
    DAT_0488a3b0 = 1;
  }
  return;
}


