/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030355f0; name: _INIT_752
 */


void _INIT_752(void)

{
  if ((DAT_048725e0 & 1) == 0) {
    DAT_048725d0 = 0;
    DAT_048725d8 = 0;
    DAT_048725c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048725c0;
    DAT_048725c8 = &DAT_046472d8;
    DAT_048725e0 = 1;
  }
  return;
}


