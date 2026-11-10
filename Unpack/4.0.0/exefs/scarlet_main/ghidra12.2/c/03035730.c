/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035730; name: _INIT_756
 */


void _INIT_756(void)

{
  if ((DAT_04872680 & 1) == 0) {
    DAT_04872670 = 0;
    DAT_04872678 = 0;
    DAT_04872660 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872660;
    DAT_04872668 = &DAT_04647678;
    DAT_04872680 = 1;
  }
  return;
}


