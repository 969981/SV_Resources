/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0302d420; name: _INIT_520
 */


void _INIT_520(void)

{
  if ((DAT_048701b0 & 1) == 0) {
    DAT_048701a0 = 0;
    DAT_048701a8 = 0;
    DAT_04870190 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870190;
    DAT_04870198 = &DAT_046397c8;
    DAT_048701b0 = 1;
  }
  return;
}


