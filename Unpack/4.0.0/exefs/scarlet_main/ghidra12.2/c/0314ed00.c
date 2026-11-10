/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314ed00; name: _INIT_1226
 */


void _INIT_1226(void)

{
  if ((DAT_0487a150 & 1) == 0) {
    DAT_0487a140 = 0;
    DAT_0487a148 = 0;
    DAT_0487a130 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487a130;
    DAT_0487a138 = &DAT_0467ec08;
    DAT_0487a150 = 1;
  }
  return;
}


