/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031476c0; name: _INIT_930
 */


void _INIT_930(void)

{
  if ((DAT_04877310 & 1) == 0) {
    DAT_04877300 = 0;
    DAT_04877308 = 0;
    DAT_048772f0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048772f0;
    DAT_048772f8 = &DAT_0466cc60;
    DAT_04877310 = 1;
  }
  return;
}


