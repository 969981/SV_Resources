/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032040; name: _INIT_580
 */


void _INIT_580(void)

{
  if ((DAT_04870b10 & 1) == 0) {
    DAT_04870b00 = 0;
    DAT_04870b08 = 0;
    DAT_04870af0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870af0;
    DAT_04870af8 = &DAT_0463d020;
    DAT_04870b10 = 1;
  }
  return;
}


