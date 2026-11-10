/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031776e0; name: _INIT_1338
 */


void _INIT_1338(void)

{
  if ((DAT_0487bf98 & 1) == 0) {
    DAT_0487bf88 = 0;
    DAT_0487bf90 = 0;
    DAT_0487bf78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487bf78;
    DAT_0487bf80 = &DAT_0468da70;
    DAT_0487bf98 = 1;
  }
  return;
}


