/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033250; name: _INIT_638
 */


void _INIT_638(void)

{
  if ((DAT_04871410 & 1) == 0) {
    DAT_04871400 = 0;
    DAT_04871408 = 0;
    DAT_048713f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048713f0;
    DAT_048713f8 = &DAT_046406d8;
    DAT_04871410 = 1;
  }
  return;
}


