/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031d20; name: _INIT_570
 */


void _INIT_570(void)

{
  if ((DAT_04870980 & 1) == 0) {
    DAT_04870970 = 0;
    DAT_04870978 = 0;
    DAT_04870960 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870960;
    DAT_04870968 = &DAT_0463c618;
    DAT_04870980 = 1;
  }
  return;
}


