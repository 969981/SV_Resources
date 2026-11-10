/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317bc30; name: _INIT_1448
 */


void _INIT_1448(void)

{
  if ((DAT_0487d0c8 & 1) == 0) {
    DAT_0487d0b8 = 0;
    DAT_0487d0c0 = 0;
    DAT_0487d0a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d0a8;
    DAT_0487d0b0 = &DAT_04694848;
    DAT_0487d0c8 = 1;
  }
  return;
}


