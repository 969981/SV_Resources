/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03147620; name: _INIT_928
 */


void _INIT_928(void)

{
  if ((DAT_048772c0 & 1) == 0) {
    DAT_048772b0 = 0;
    DAT_048772b8 = 0;
    DAT_048772a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048772a0;
    DAT_048772a8 = &DAT_0466cae0;
    DAT_048772c0 = 1;
  }
  return;
}


