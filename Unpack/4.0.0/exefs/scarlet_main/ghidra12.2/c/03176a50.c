/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176a50; name: _INIT_1324
 */


void _INIT_1324(void)

{
  if ((DAT_0487bd68 & 1) == 0) {
    DAT_0487bd58 = 0;
    DAT_0487bd60 = 0;
    DAT_0487bd48 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bd48;
    DAT_0487bd50 = &DAT_0468cd08;
    DAT_0487bd68 = 1;
  }
  return;
}


