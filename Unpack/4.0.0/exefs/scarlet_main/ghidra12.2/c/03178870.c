/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178870; name: _INIT_1376
 */


void _INIT_1376(void)

{
  if ((DAT_0487c588 & 1) == 0) {
    DAT_0487c578 = 0;
    DAT_0487c580 = 0;
    DAT_0487c568 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c568;
    DAT_0487c570 = &DAT_04690250;
    DAT_0487c588 = 1;
  }
  return;
}


