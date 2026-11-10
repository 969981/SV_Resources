/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030352d0; name: _INIT_742
 */


void _INIT_742(void)

{
  if ((DAT_04872450 & 1) == 0) {
    DAT_04872440 = 0;
    DAT_04872448 = 0;
    DAT_04872430 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04872430;
    DAT_04872438 = &DAT_046468c8;
    DAT_04872450 = 1;
  }
  return;
}


