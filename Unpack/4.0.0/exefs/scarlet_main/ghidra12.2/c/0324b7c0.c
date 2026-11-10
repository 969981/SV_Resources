/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b7c0; name: _INIT_1778
 */


void _INIT_1778(void)

{
  if ((DAT_04888bc8 & 1) == 0) {
    DAT_04888bb8 = 0;
    DAT_04888bc0 = 0;
    DAT_04888ba8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888ba8;
    DAT_04888bb0 = &DAT_046bd160;
    DAT_04888bc8 = 1;
  }
  return;
}


