/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320e940; name: _INIT_1648
 */


void _INIT_1648(void)

{
  if ((DAT_04884fe8 & 1) == 0) {
    DAT_04884fd8 = 0;
    DAT_04884fe0 = 0;
    DAT_04884fc8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884fc8;
    DAT_04884fd0 = &DAT_046a9280;
    DAT_04884fe8 = 1;
  }
  return;
}


