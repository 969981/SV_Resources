/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314e3a0; name: _INIT_1196
 */


void _INIT_1196(void)

{
  if ((DAT_04879ca0 & 1) == 0) {
    DAT_04879c90 = 0;
    DAT_04879c98 = 0;
    DAT_04879c80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04879c80;
    DAT_04879c88 = &DAT_0467cc60;
    DAT_04879ca0 = 1;
  }
  return;
}


