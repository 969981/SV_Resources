/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03229890; name: _INIT_1674
 */


void _INIT_1674(void)

{
  if ((DAT_04885500 & 1) == 0) {
    DAT_048854f0 = 0;
    DAT_048854f8 = 0;
    DAT_048854e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048854e0;
    DAT_048854e8 = &DAT_046aab48;
    DAT_04885500 = 1;
  }
  return;
}


