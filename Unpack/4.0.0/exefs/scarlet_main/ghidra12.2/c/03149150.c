/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149150; name: _INIT_992
 */


void _INIT_992(void)

{
  if ((DAT_04877cc0 & 1) == 0) {
    DAT_04877cb0 = 0;
    DAT_04877cb8 = 0;
    DAT_04877ca0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877ca0;
    DAT_04877ca8 = &DAT_04670a80;
    DAT_04877cc0 = 1;
  }
  return;
}


