/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031d70; name: _INIT_571
 */


void _INIT_571(void)

{
  if ((DAT_048709a8 & 1) == 0) {
    DAT_04870998 = 0;
    DAT_048709a0 = 0;
    DAT_04870988 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870988;
    DAT_04870990 = &DAT_0463c760;
    DAT_048709a8 = 1;
  }
  return;
}


