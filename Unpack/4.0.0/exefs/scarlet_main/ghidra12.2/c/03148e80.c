/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148e80; name: _INIT_983
 */


void _INIT_983(void)

{
  if ((DAT_04877b58 & 1) == 0) {
    DAT_04877b48 = 0;
    DAT_04877b50 = 0;
    DAT_04877b38 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877b38;
    DAT_04877b40 = &DAT_04670078;
    DAT_04877b58 = 1;
  }
  return;
}


