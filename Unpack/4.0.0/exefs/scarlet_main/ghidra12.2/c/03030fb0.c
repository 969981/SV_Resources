/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03030fb0; name: _INIT_527
 */


void _INIT_527(void)

{
  if ((DAT_048702c8 & 1) == 0) {
    DAT_048702b8 = 0;
    DAT_048702c0 = 0;
    DAT_048702a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048702a8;
    DAT_048702b0 = &DAT_04639e18;
    DAT_048702c8 = 1;
  }
  return;
}


