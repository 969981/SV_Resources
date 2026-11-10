/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318e7e0; name: _INIT_1467
 */


void _INIT_1467(void)

{
  if ((DAT_0487d5f8 & 1) == 0) {
    DAT_0487d5e8 = 0;
    DAT_0487d5f0 = 0;
    DAT_0487d5d8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d5d8;
    DAT_0487d5e0 = &DAT_04697ba8;
    DAT_0487d5f8 = 1;
  }
  return;
}


