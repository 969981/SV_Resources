/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031550; name: _INIT_545
 */


void _INIT_545(void)

{
  if ((DAT_04870598 & 1) == 0) {
    DAT_04870588 = 0;
    DAT_04870590 = 0;
    DAT_04870578 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870578;
    DAT_04870580 = &DAT_0463ae10;
    DAT_04870598 = 1;
  }
  return;
}


