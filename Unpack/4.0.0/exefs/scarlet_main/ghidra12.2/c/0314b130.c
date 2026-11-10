/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314b130; name: _INIT_1076
 */


void _INIT_1076(void)

{
  if ((DAT_048789e0 & 1) == 0) {
    DAT_048789d0 = 0;
    DAT_048789d8 = 0;
    DAT_048789c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048789c0;
    DAT_048789c8 = &DAT_04675ac0;
    DAT_048789e0 = 1;
  }
  return;
}


