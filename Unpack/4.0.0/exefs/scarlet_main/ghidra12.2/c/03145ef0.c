/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03145ef0; name: _INIT_879
 */


void _INIT_879(void)

{
  if ((DAT_04876b18 & 1) == 0) {
    DAT_04876b08 = 0;
    DAT_04876b10 = 0;
    DAT_04876af8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04876af8;
    DAT_04876b00 = &DAT_04669e00;
    DAT_04876b18 = 1;
  }
  return;
}


