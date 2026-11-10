/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ac50; name: _INIT_1066
 */


void _INIT_1066(void)

{
  if ((DAT_04878850 & 1) == 0) {
    DAT_04878840 = 0;
    DAT_04878848 = 0;
    DAT_04878830 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878830;
    DAT_04878838 = &DAT_04675210;
    DAT_04878850 = 1;
  }
  return;
}


