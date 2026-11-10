/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148bb0; name: _INIT_974
 */


void _INIT_974(void)

{
  if ((DAT_048779f0 & 1) == 0) {
    DAT_048779e0 = 0;
    DAT_048779e8 = 0;
    DAT_048779d0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048779d0;
    DAT_048779d8 = &DAT_0466f5f0;
    DAT_048779f0 = 1;
  }
  return;
}


