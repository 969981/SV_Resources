/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030316e0; name: _INIT_550
 */


void _INIT_550(void)

{
  if ((DAT_04870660 & 1) == 0) {
    DAT_04870650 = 0;
    DAT_04870658 = 0;
    DAT_04870640 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870640;
    DAT_04870648 = &DAT_0463b2a0;
    DAT_04870660 = 1;
  }
  return;
}


