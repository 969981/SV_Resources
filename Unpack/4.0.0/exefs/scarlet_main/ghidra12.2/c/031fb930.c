/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031fb930; name: _INIT_1643
 */


void _INIT_1643(void)

{
  if ((DAT_04884e48 & 1) == 0) {
    DAT_04884e38 = 0;
    DAT_04884e40 = 0;
    DAT_04884e28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884e28;
    DAT_04884e30 = &DAT_046a82c0;
    DAT_04884e48 = 1;
  }
  return;
}


