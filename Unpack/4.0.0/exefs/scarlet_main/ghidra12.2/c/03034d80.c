/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034d80; name: _INIT_725
 */


void _INIT_725(void)

{
  if ((DAT_048721a8 & 1) == 0) {
    DAT_04872198 = 0;
    DAT_048721a0 = 0;
    DAT_04872188 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872188;
    DAT_04872190 = &DAT_04645a50;
    DAT_048721a8 = 1;
  }
  return;
}


