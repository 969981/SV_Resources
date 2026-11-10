/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a0a0; name: _INIT_1036
 */


void _INIT_1036(void)

{
  if ((DAT_048783a0 & 1) == 0) {
    DAT_04878390 = 0;
    DAT_04878398 = 0;
    DAT_04878380 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878380;
    DAT_04878388 = &DAT_046736d0;
    DAT_048783a0 = 1;
  }
  return;
}


