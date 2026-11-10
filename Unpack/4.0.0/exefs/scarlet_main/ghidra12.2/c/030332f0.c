/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030332f0; name: _INIT_640
 */


void _INIT_640(void)

{
  if ((DAT_04871460 & 1) == 0) {
    DAT_04871450 = 0;
    DAT_04871458 = 0;
    DAT_04871440 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871440;
    DAT_04871448 = &DAT_046408a8;
    DAT_04871460 = 1;
  }
  return;
}


