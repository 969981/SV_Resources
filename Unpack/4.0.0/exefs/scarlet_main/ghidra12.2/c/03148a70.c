/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03148a70; name: _INIT_970
 */


void _INIT_970(void)

{
  if ((DAT_04877950 & 1) == 0) {
    DAT_04877940 = 0;
    DAT_04877948 = 0;
    DAT_04877930 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04877930;
    DAT_04877938 = &DAT_0466f110;
    DAT_04877950 = 1;
  }
  return;
}


