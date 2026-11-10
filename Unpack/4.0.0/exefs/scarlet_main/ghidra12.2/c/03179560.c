/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03179560; name: _INIT_1407
 */


void _INIT_1407(void)

{
  if ((DAT_0487ca60 & 1) == 0) {
    DAT_0487ca50 = 0;
    DAT_0487ca58 = 0;
    DAT_0487ca40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487ca40;
    DAT_0487ca48 = &DAT_046923c8;
    DAT_0487ca60 = 1;
  }
  return;
}


