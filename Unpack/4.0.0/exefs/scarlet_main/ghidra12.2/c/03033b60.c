/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033b60; name: _INIT_667
 */


void _INIT_667(void)

{
  if ((DAT_04871898 & 1) == 0) {
    DAT_04871888 = 0;
    DAT_04871890 = 0;
    DAT_04871878 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871878;
    DAT_04871880 = &DAT_04642158;
    DAT_04871898 = 1;
  }
  return;
}


