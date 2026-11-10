/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033b4ee0; name: _INIT_2078
 */


void _INIT_2078(void)

{
  if ((DAT_0488e5b8 & 1) == 0) {
    DAT_0488e5a8 = 0;
    DAT_0488e5b0 = 0;
    DAT_0488e598 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488e598;
    DAT_0488e5a0 = &DAT_047b44c8;
    DAT_0488e5b8 = 1;
  }
  return;
}


