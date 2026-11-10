/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03177fb0; name: _INIT_1348
 */


void _INIT_1348(void)

{
  if ((DAT_0487c128 & 1) == 0) {
    DAT_0487c118 = 0;
    DAT_0487c120 = 0;
    DAT_0487c108 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c108;
    DAT_0487c110 = &DAT_0468e3b8;
    DAT_0487c128 = 1;
  }
  return;
}


