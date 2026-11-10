/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032800; name: _INIT_605
 */


void _INIT_605(void)

{
  if ((DAT_04870ee8 & 1) == 0) {
    DAT_04870ed8 = 0;
    DAT_04870ee0 = 0;
    DAT_04870ec8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870ec8;
    DAT_04870ed0 = &DAT_0463e778;
    DAT_04870ee8 = 1;
  }
  return;
}


