/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03030e70; name: _INIT_523
 */


void _INIT_523(void)

{
  if ((DAT_04870228 & 1) == 0) {
    DAT_04870218 = 0;
    DAT_04870220 = 0;
    DAT_04870208 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870208;
    DAT_04870210 = &DAT_04639b10;
    DAT_04870228 = 1;
  }
  return;
}


