/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264f00; name: _INIT_1863
 */


void _INIT_1863(void)

{
  if ((DAT_0488a2c0 & 1) == 0) {
    DAT_0488a2b0 = 0;
    DAT_0488a2b8 = 0;
    DAT_0488a2a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488a2a0;
    DAT_0488a2a8 = &DAT_046c6870;
    DAT_0488a2c0 = 1;
  }
  return;
}


