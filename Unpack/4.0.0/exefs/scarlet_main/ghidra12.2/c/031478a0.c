/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031478a0; name: _INIT_936
 */


void _INIT_936(void)

{
  if ((DAT_04877400 & 1) == 0) {
    DAT_048773f0 = 0;
    DAT_048773f8 = 0;
    DAT_048773e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048773e0;
    DAT_048773e8 = &DAT_0466d1d0;
    DAT_04877400 = 1;
  }
  return;
}


