/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0318e420; name: _INIT_1465
 */


void _INIT_1465(void)

{
  if ((DAT_0487d5a8 & 1) == 0) {
    DAT_0487d598 = 0;
    DAT_0487d5a0 = 0;
    DAT_0487d588 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487d588;
    DAT_0487d590 = &DAT_046979e8;
    DAT_0487d5a8 = 1;
  }
  return;
}


