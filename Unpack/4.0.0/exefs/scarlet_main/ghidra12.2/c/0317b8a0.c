/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317b8a0; name: _INIT_1442
 */


void _INIT_1442(void)

{
  if ((DAT_0487cfd8 & 1) == 0) {
    DAT_0487cfc8 = 0;
    DAT_0487cfd0 = 0;
    DAT_0487cfb8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487cfb8;
    DAT_0487cfc0 = &DAT_04694310;
    DAT_0487cfd8 = 1;
  }
  return;
}


