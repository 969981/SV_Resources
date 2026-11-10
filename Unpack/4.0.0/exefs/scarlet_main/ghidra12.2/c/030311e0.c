/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030311e0; name: _INIT_534
 */


void _INIT_534(void)

{
  if ((DAT_048703e0 & 1) == 0) {
    DAT_048703d0 = 0;
    DAT_048703d8 = 0;
    DAT_048703c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048703c0;
    DAT_048703c8 = &DAT_0463a3e0;
    DAT_048703e0 = 1;
  }
  return;
}


