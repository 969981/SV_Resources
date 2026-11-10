/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148870; name: _INIT_964
 */


void _INIT_964(void)

{
  if ((DAT_04877860 & 1) == 0) {
    DAT_04877850 = 0;
    DAT_04877858 = 0;
    DAT_04877840 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877840;
    DAT_04877848 = &DAT_0466ebd8;
    DAT_04877860 = 1;
  }
  return;
}


