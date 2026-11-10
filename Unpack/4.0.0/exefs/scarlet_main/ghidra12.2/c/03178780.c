/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178780; name: _INIT_1373
 */


void _INIT_1373(void)

{
  if ((DAT_0487c510 & 1) == 0) {
    DAT_0487c500 = 0;
    DAT_0487c508 = 0;
    DAT_0487c4f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c4f0;
    DAT_0487c4f8 = &DAT_0468ff50;
    DAT_0487c510 = 1;
  }
  return;
}


