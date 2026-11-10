/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03035460; name: _INIT_747
 */


void _INIT_747(void)

{
  if ((DAT_04872518 & 1) == 0) {
    DAT_04872508 = 0;
    DAT_04872510 = 0;
    DAT_048724f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048724f8;
    DAT_04872500 = &DAT_04646df0;
    DAT_04872518 = 1;
  }
  return;
}


