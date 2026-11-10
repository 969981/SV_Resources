/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318eba0; name: _INIT_1479
 */


void _INIT_1479(void)

{
  if ((DAT_0487d7d8 & 1) == 0) {
    DAT_0487d7c8 = 0;
    DAT_0487d7d0 = 0;
    DAT_0487d7b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d7b8;
    DAT_0487d7c0 = &DAT_04698950;
    DAT_0487d7d8 = 1;
  }
  return;
}


