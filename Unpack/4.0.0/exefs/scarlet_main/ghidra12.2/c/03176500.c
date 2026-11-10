/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03176500; name: _INIT_1307
 */


void _INIT_1307(void)

{
  if ((DAT_0487bac0 & 1) == 0) {
    DAT_0487bab0 = 0;
    DAT_0487bab8 = 0;
    DAT_0487baa0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487baa0;
    DAT_0487baa8 = &DAT_0468ba90;
    DAT_0487bac0 = 1;
  }
  return;
}


