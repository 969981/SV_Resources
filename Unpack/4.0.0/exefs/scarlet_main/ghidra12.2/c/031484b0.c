/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031484b0; name: _INIT_957
 */


void _INIT_957(void)

{
  if ((DAT_04877748 & 1) == 0) {
    DAT_04877738 = 0;
    DAT_04877740 = 0;
    DAT_04877728 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877728;
    DAT_04877730 = &DAT_0466e3b8;
    DAT_04877748 = 1;
  }
  return;
}


