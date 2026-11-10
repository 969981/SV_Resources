/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035140; name: _INIT_737
 */


void _INIT_737(void)

{
  if ((DAT_04872388 & 1) == 0) {
    DAT_04872378 = 0;
    DAT_04872380 = 0;
    DAT_04872368 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872368;
    DAT_04872370 = &DAT_04646468;
    DAT_04872388 = 1;
  }
  return;
}


