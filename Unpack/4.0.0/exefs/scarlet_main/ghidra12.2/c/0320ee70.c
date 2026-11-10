/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320ee70; name: _INIT_1658
 */


void _INIT_1658(void)

{
  if ((DAT_04885178 & 1) == 0) {
    DAT_04885168 = 0;
    DAT_04885170 = 0;
    DAT_04885158 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04885158;
    DAT_04885160 = &DAT_046a9ca8;
    DAT_04885178 = 1;
  }
  return;
}


