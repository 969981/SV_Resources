/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035eb0; name: _INIT_780
 */


void _INIT_780(void)

{
  if ((DAT_04872a40 & 1) == 0) {
    DAT_04872a30 = 0;
    DAT_04872a38 = 0;
    DAT_04872a20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872a20;
    DAT_04872a28 = &DAT_04649270;
    DAT_04872a40 = 1;
  }
  return;
}


