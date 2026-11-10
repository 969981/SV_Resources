/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032e90; name: _INIT_626
 */


void _INIT_626(void)

{
  if ((DAT_04871230 & 1) == 0) {
    DAT_04871220 = 0;
    DAT_04871228 = 0;
    DAT_04871210 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871210;
    DAT_04871218 = &DAT_0463fc40;
    DAT_04871230 = 1;
  }
  return;
}


