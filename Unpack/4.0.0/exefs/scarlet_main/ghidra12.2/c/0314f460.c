/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f460; name: _INIT_1245
 */


void _INIT_1245(void)

{
  if ((DAT_0487a448 & 1) == 0) {
    DAT_0487a438 = 0;
    DAT_0487a440 = 0;
    DAT_0487a428 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a428;
    DAT_0487a430 = &DAT_0467ff20;
    DAT_0487a448 = 1;
  }
  return;
}


