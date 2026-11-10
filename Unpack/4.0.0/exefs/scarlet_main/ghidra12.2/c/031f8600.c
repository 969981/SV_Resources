/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031f8600; name: _INIT_1636
 */


void _INIT_1636(void)

{
  if ((DAT_04884d50 & 1) == 0) {
    DAT_04884d40 = 0;
    DAT_04884d48 = 0;
    DAT_04884d30 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04884d30;
    DAT_04884d38 = &DAT_046a7eb0;
    DAT_04884d50 = 1;
  }
  return;
}


