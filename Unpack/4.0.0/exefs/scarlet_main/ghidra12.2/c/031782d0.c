/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031782d0; name: _INIT_1358
 */


void _INIT_1358(void)

{
  if ((DAT_0487c2b8 & 1) == 0) {
    DAT_0487c2a8 = 0;
    DAT_0487c2b0 = 0;
    DAT_0487c298 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c298;
    DAT_0487c2a0 = &DAT_0468ef80;
    DAT_0487c2b8 = 1;
  }
  return;
}


