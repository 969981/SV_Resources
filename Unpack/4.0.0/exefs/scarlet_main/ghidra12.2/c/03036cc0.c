/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03036cc0; name: _INIT_819
 */


void _INIT_819(void)

{
  if ((DAT_04873058 & 1) == 0) {
    DAT_04873048 = 0;
    DAT_04873050 = 0;
    DAT_04873038 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04873038;
    DAT_04873040 = &DAT_0464bad0;
    DAT_04873058 = 1;
  }
  return;
}


