/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a1b0; name: _INIT_1039
 */


void _INIT_1039(void)

{
  if ((DAT_04878418 & 1) == 0) {
    DAT_04878408 = 0;
    DAT_04878410 = 0;
    DAT_048783f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048783f8;
    DAT_04878400 = &DAT_04673968;
    DAT_04878418 = 1;
  }
  return;
}


