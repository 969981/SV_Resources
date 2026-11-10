/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d91e0; name: _INIT_1602
 */


void _INIT_1602(void)

{
  if ((DAT_048842f8 & 1) == 0) {
    DAT_048842e8 = 0;
    DAT_048842f0 = 0;
    DAT_048842d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048842d8;
    DAT_048842e0 = &DAT_046a5918;
    DAT_048842f8 = 1;
  }
  return;
}


