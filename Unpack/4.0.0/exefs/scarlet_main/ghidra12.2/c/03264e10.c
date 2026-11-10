/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264e10; name: _INIT_1860
 */


void _INIT_1860(void)

{
  if ((DAT_0488a248 & 1) == 0) {
    DAT_0488a238 = 0;
    DAT_0488a240 = 0;
    DAT_0488a228 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a228;
    DAT_0488a230 = &DAT_046c63b8;
    DAT_0488a248 = 1;
  }
  return;
}


