/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03178b90; name: _INIT_1386
 */


void _INIT_1386(void)

{
  if ((DAT_0487c718 & 1) == 0) {
    DAT_0487c708 = 0;
    DAT_0487c710 = 0;
    DAT_0487c6f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c6f8;
    DAT_0487c700 = &DAT_04690be8;
    DAT_0487c718 = 1;
  }
  return;
}


