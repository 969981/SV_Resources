/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314dc70; name: _INIT_1173
 */


void _INIT_1173(void)

{
  if ((DAT_04879908 & 1) == 0) {
    DAT_048798f8 = 0;
    DAT_04879900 = 0;
    DAT_048798e8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048798e8;
    DAT_048798f0 = &DAT_0467b690;
    DAT_04879908 = 1;
  }
  return;
}


