/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03149330; name: _INIT_998
 */


void _INIT_998(void)

{
  if ((DAT_04877db0 & 1) == 0) {
    DAT_04877da0 = 0;
    DAT_04877da8 = 0;
    DAT_04877d90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877d90;
    DAT_04877d98 = &DAT_04670e88;
    DAT_04877db0 = 1;
  }
  return;
}


