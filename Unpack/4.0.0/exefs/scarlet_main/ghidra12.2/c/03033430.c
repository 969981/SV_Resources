/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033430; name: _INIT_644
 */


void _INIT_644(void)

{
  if ((DAT_04871500 & 1) == 0) {
    DAT_048714f0 = 0;
    DAT_048714f8 = 0;
    DAT_048714e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048714e0;
    DAT_048714e8 = &DAT_04640bf0;
    DAT_04871500 = 1;
  }
  return;
}


