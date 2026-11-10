/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0319baf0; name: _INIT_1501
 */


void _INIT_1501(void)

{
  if ((DAT_0487e240 & 1) == 0) {
    DAT_0487e230 = 0;
    DAT_0487e238 = 0;
    DAT_0487e220 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487e220;
    DAT_0487e228 = &DAT_0469df58;
    DAT_0487e240 = 1;
  }
  return;
}


