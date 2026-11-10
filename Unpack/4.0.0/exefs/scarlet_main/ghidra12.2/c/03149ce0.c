/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149ce0; name: _INIT_1029
 */


void _INIT_1029(void)

{
  if ((DAT_04878288 & 1) == 0) {
    DAT_04878278 = 0;
    DAT_04878280 = 0;
    DAT_04878268 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878268;
    DAT_04878270 = &DAT_04673038;
    DAT_04878288 = 1;
  }
  return;
}


