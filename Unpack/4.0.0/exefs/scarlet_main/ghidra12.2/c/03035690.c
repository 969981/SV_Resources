/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035690; name: _INIT_754
 */


void _INIT_754(void)

{
  if ((DAT_04872630 & 1) == 0) {
    DAT_04872620 = 0;
    DAT_04872628 = 0;
    DAT_04872610 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872610;
    DAT_04872618 = &DAT_046474f8;
    DAT_04872630 = 1;
  }
  return;
}


