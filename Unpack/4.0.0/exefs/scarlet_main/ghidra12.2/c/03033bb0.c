/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033bb0; name: _INIT_668
 */


void _INIT_668(void)

{
  if ((DAT_048718c0 & 1) == 0) {
    DAT_048718b0 = 0;
    DAT_048718b8 = 0;
    DAT_048718a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048718a0;
    DAT_048718a8 = &DAT_04642210;
    DAT_048718c0 = 1;
  }
  return;
}


