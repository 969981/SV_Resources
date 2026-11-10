/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264cd0; name: _INIT_1856
 */


void _INIT_1856(void)

{
  if ((DAT_0488a1a8 & 1) == 0) {
    DAT_0488a198 = 0;
    DAT_0488a1a0 = 0;
    DAT_0488a188 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a188;
    DAT_0488a190 = &DAT_046c5f38;
    DAT_0488a1a8 = 1;
  }
  return;
}


