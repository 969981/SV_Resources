/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147710; name: _INIT_931
 */


void _INIT_931(void)

{
  if ((DAT_04877338 & 1) == 0) {
    DAT_04877328 = 0;
    DAT_04877330 = 0;
    DAT_04877318 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877318;
    DAT_04877320 = &DAT_0466cca8;
    DAT_04877338 = 1;
  }
  return;
}


