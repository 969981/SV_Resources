/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030360e0; name: _INIT_787
 */


void _INIT_787(void)

{
  if ((DAT_04872b58 & 1) == 0) {
    DAT_04872b48 = 0;
    DAT_04872b50 = 0;
    DAT_04872b38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872b38;
    DAT_04872b40 = &DAT_04649bb8;
    DAT_04872b58 = 1;
  }
  return;
}


