/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319bb90; name: _INIT_1503
 */


void _INIT_1503(void)

{
  if ((DAT_0487e290 & 1) == 0) {
    DAT_0487e280 = 0;
    DAT_0487e288 = 0;
    DAT_0487e270 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e270;
    DAT_0487e278 = &DAT_0469e1b0;
    DAT_0487e290 = 1;
  }
  return;
}


