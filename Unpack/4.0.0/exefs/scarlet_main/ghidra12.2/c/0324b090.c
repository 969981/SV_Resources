/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324b090; name: _INIT_1755
 */


void _INIT_1755(void)

{
  if ((DAT_04888830 & 1) == 0) {
    DAT_04888820 = 0;
    DAT_04888828 = 0;
    DAT_04888810 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04888810;
    DAT_04888818 = &DAT_046bbcf0;
    DAT_04888830 = 1;
  }
  return;
}


