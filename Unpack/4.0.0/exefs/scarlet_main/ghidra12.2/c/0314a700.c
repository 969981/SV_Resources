/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314a700; name: _INIT_1049
 */


void _INIT_1049(void)

{
  if ((DAT_048785a8 & 1) == 0) {
    DAT_04878598 = 0;
    DAT_048785a0 = 0;
    DAT_04878588 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04878588;
    DAT_04878590 = &DAT_04674258;
    DAT_048785a8 = 1;
  }
  return;
}


