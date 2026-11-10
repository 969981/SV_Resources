/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031780; name: _INIT_552
 */


void _INIT_552(void)

{
  if ((DAT_048706b0 & 1) == 0) {
    DAT_048706a0 = 0;
    DAT_048706a8 = 0;
    DAT_04870690 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870690;
    DAT_04870698 = &DAT_0463b460;
    DAT_048706b0 = 1;
  }
  return;
}


