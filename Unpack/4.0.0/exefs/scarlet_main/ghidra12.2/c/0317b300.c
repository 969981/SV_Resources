/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317b300; name: _INIT_1439
 */


void _INIT_1439(void)

{
  if ((DAT_0487cf60 & 1) == 0) {
    DAT_0487cf50 = 0;
    DAT_0487cf58 = 0;
    DAT_0487cf40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cf40;
    DAT_0487cf48 = &DAT_04694078;
    DAT_0487cf60 = 1;
  }
  return;
}


