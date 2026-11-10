/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031d93a0; name: _INIT_1604
 */


void _INIT_1604(void)

{
  if ((DAT_04884348 & 1) == 0) {
    DAT_04884338 = 0;
    DAT_04884340 = 0;
    DAT_04884328 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884328;
    DAT_04884330 = &DAT_046a5a40;
    DAT_04884348 = 1;
  }
  return;
}


