/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036040; name: _INIT_785
 */


void _INIT_785(void)

{
  if ((DAT_04872b08 & 1) == 0) {
    DAT_04872af8 = 0;
    DAT_04872b00 = 0;
    DAT_04872ae8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872ae8;
    DAT_04872af0 = &DAT_046498c8;
    DAT_04872b08 = 1;
  }
  return;
}


