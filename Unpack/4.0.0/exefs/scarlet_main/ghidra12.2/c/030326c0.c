/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030326c0; name: _INIT_601
 */


void _INIT_601(void)

{
  if ((DAT_04870e48 & 1) == 0) {
    DAT_04870e38 = 0;
    DAT_04870e40 = 0;
    DAT_04870e28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04870e28;
    DAT_04870e30 = &DAT_0463e408;
    DAT_04870e48 = 1;
  }
  return;
}


