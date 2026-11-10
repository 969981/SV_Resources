/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033701e0; name: _INIT_2054
 */


void _INIT_2054(void)

{
  if ((DAT_0488daf8 & 1) == 0) {
    DAT_0488dae8 = 0;
    DAT_0488daf0 = 0;
    DAT_0488dad8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0488dad8;
    DAT_0488dae0 = &DAT_047adf38;
    DAT_0488daf8 = 1;
  }
  return;
}


