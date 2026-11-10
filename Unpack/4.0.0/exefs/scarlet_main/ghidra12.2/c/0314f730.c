/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f730; name: _INIT_1254
 */


void _INIT_1254(void)

{
  if ((DAT_0487a5b0 & 1) == 0) {
    DAT_0487a5a0 = 0;
    DAT_0487a5a8 = 0;
    DAT_0487a590 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a590;
    DAT_0487a598 = &DAT_046804e8;
    DAT_0487a5b0 = 1;
  }
  return;
}


