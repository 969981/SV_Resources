/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036270; name: _INIT_792
 */


void _INIT_792(void)

{
  if ((DAT_04872c20 & 1) == 0) {
    DAT_04872c10 = 0;
    DAT_04872c18 = 0;
    DAT_04872c00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872c00;
    DAT_04872c08 = &DAT_04649ed8;
    DAT_04872c20 = 1;
  }
  return;
}


