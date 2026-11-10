/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317a080; name: _INIT_1419
 */


void _INIT_1419(void)

{
  if ((DAT_0487cc40 & 1) == 0) {
    DAT_0487cc30 = 0;
    DAT_0487cc38 = 0;
    DAT_0487cc20 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cc20;
    DAT_0487cc28 = &DAT_04692e98;
    DAT_0487cc40 = 1;
  }
  return;
}


