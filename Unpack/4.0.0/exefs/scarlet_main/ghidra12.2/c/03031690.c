/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031690; name: _INIT_549
 */


void _INIT_549(void)

{
  if ((DAT_04870638 & 1) == 0) {
    DAT_04870628 = 0;
    DAT_04870630 = 0;
    DAT_04870618 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870618;
    DAT_04870620 = &DAT_0463b1c0;
    DAT_04870638 = 1;
  }
  return;
}


