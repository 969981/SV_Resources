/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317c290; name: _INIT_1459
 */


void _INIT_1459(void)

{
  if ((DAT_0487d280 & 1) == 0) {
    DAT_0487d270 = 0;
    DAT_0487d278 = 0;
    DAT_0487d260 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d260;
    DAT_0487d268 = &DAT_04695338;
    DAT_0487d280 = 1;
  }
  return;
}


