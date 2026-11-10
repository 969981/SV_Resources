/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0320e8f0; name: _INIT_1647
 */


void _INIT_1647(void)

{
  if ((DAT_04884fc0 & 1) == 0) {
    DAT_04884fb0 = 0;
    DAT_04884fb8 = 0;
    DAT_04884fa0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884fa0;
    DAT_04884fa8 = &DAT_046a9350;
    DAT_04884fc0 = 1;
  }
  return;
}


