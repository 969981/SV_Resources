/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317bb90; name: _INIT_1446
 */


void _INIT_1446(void)

{
  if ((DAT_0487d078 & 1) == 0) {
    DAT_0487d068 = 0;
    DAT_0487d070 = 0;
    DAT_0487d058 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d058;
    DAT_0487d060 = &DAT_04694668;
    DAT_0487d078 = 1;
  }
  return;
}


