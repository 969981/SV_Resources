/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03031a50; name: _INIT_561
 */


void _INIT_561(void)

{
  if ((DAT_04870818 & 1) == 0) {
    DAT_04870808 = 0;
    DAT_04870810 = 0;
    DAT_048707f8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048707f8;
    DAT_04870800 = &DAT_0463bcd0;
    DAT_04870818 = 1;
  }
  return;
}


