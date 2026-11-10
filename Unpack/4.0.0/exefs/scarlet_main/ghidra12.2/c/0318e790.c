/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318e790; name: _INIT_1466
 */


void _INIT_1466(void)

{
  if ((DAT_0487d5d0 & 1) == 0) {
    DAT_0487d5c0 = 0;
    DAT_0487d5c8 = 0;
    DAT_0487d5b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d5b0;
    DAT_0487d5b8 = &DAT_04697ac8;
    DAT_0487d5d0 = 1;
  }
  return;
}


