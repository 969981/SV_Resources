/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314f230; name: _INIT_1238
 */


void _INIT_1238(void)

{
  if ((DAT_0487a330 & 1) == 0) {
    DAT_0487a320 = 0;
    DAT_0487a328 = 0;
    DAT_0487a310 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a310;
    DAT_0487a318 = &DAT_0467f888;
    DAT_0487a330 = 1;
  }
  return;
}


