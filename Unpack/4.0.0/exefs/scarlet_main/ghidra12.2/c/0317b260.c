/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317b260; name: _INIT_1437
 */


void _INIT_1437(void)

{
  if ((DAT_0487cf10 & 1) == 0) {
    DAT_0487cf00 = 0;
    DAT_0487cf08 = 0;
    DAT_0487cef0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cef0;
    DAT_0487cef8 = &DAT_04693e98;
    DAT_0487cf10 = 1;
  }
  return;
}


