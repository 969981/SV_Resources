/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031788c0; name: _INIT_1377
 */


void _INIT_1377(void)

{
  if ((DAT_0487c5b0 & 1) == 0) {
    DAT_0487c5a0 = 0;
    DAT_0487c5a8 = 0;
    DAT_0487c590 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_0487c590;
    DAT_0487c598 = &DAT_04690308;
    DAT_0487c5b0 = 1;
  }
  return;
}


