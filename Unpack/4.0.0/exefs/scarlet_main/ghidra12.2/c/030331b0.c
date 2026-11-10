/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030331b0; name: _INIT_636
 */


void _INIT_636(void)

{
  if ((DAT_048713c0 & 1) == 0) {
    DAT_048713b0 = 0;
    DAT_048713b8 = 0;
    DAT_048713a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048713a0;
    DAT_048713a8 = &DAT_04640530;
    DAT_048713c0 = 1;
  }
  return;
}


