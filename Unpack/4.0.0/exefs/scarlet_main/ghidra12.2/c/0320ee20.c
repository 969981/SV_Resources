/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320ee20; name: _INIT_1657
 */


void _INIT_1657(void)

{
  if ((DAT_04885150 & 1) == 0) {
    DAT_04885140 = 0;
    DAT_04885148 = 0;
    DAT_04885130 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885130;
    DAT_04885138 = &DAT_046a9a10;
    DAT_04885150 = 1;
  }
  return;
}


