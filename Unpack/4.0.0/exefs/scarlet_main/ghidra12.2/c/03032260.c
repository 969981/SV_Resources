/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032260; name: _INIT_587
 */


void _INIT_587(void)

{
  if ((DAT_04870c18 & 1) == 0) {
    DAT_04870c08 = 0;
    DAT_04870c10 = 0;
    DAT_04870bf8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870bf8;
    DAT_04870c00 = &DAT_0463d688;
    DAT_04870c18 = 1;
  }
  return;
}


