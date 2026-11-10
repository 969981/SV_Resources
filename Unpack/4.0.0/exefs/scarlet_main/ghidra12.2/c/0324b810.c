/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b810; name: _INIT_1779
 */


void _INIT_1779(void)

{
  if ((DAT_04888bf0 & 1) == 0) {
    DAT_04888be0 = 0;
    DAT_04888be8 = 0;
    DAT_04888bd0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888bd0;
    DAT_04888bd8 = &DAT_046bd218;
    DAT_04888bf0 = 1;
  }
  return;
}


