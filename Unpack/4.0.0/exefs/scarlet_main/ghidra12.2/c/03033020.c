/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033020; name: _INIT_631
 */


void _INIT_631(void)

{
  if ((DAT_048712f8 & 1) == 0) {
    DAT_048712e8 = 0;
    DAT_048712f0 = 0;
    DAT_048712d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048712d8;
    DAT_048712e0 = &DAT_04640090;
    DAT_048712f8 = 1;
  }
  return;
}


