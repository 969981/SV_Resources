/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176550; name: _INIT_1308
 */


void _INIT_1308(void)

{
  if ((DAT_0487bae8 & 1) == 0) {
    DAT_0487bad8 = 0;
    DAT_0487bae0 = 0;
    DAT_0487bac8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bac8;
    DAT_0487bad0 = &DAT_0468bb70;
    DAT_0487bae8 = 1;
  }
  return;
}


