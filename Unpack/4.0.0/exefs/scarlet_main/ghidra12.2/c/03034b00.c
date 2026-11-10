/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034b00; name: _INIT_717
 */


void _INIT_717(void)

{
  if ((DAT_04872068 & 1) == 0) {
    DAT_04872058 = 0;
    DAT_04872060 = 0;
    DAT_04872048 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872048;
    DAT_04872050 = &DAT_04645290;
    DAT_04872068 = 1;
  }
  return;
}


