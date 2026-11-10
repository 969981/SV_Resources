/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030328f0; name: _INIT_608
 */


void _INIT_608(void)

{
  if ((DAT_04870f60 & 1) == 0) {
    DAT_04870f50 = 0;
    DAT_04870f58 = 0;
    DAT_04870f40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870f40;
    DAT_04870f48 = &DAT_0463eae8;
    DAT_04870f60 = 1;
  }
  return;
}


