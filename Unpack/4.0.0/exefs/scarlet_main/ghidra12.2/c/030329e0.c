/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030329e0; name: _INIT_611
 */


void _INIT_611(void)

{
  if ((DAT_04870fd8 & 1) == 0) {
    DAT_04870fc8 = 0;
    DAT_04870fd0 = 0;
    DAT_04870fb8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870fb8;
    DAT_04870fc0 = &DAT_0463edb8;
    DAT_04870fd8 = 1;
  }
  return;
}


