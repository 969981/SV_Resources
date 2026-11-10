/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264be0; name: _INIT_1853
 */


void _INIT_1853(void)

{
  if ((DAT_0488a130 & 1) == 0) {
    DAT_0488a120 = 0;
    DAT_0488a128 = 0;
    DAT_0488a110 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a110;
    DAT_0488a118 = &DAT_046c5ce8;
    DAT_0488a130 = 1;
  }
  return;
}


