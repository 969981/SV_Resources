/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033f70; name: _INIT_680
 */


void _INIT_680(void)

{
  if ((DAT_04871aa0 & 1) == 0) {
    DAT_04871a90 = 0;
    DAT_04871a98 = 0;
    DAT_04871a80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871a80;
    DAT_04871a88 = &DAT_04642d70;
    DAT_04871aa0 = 1;
  }
  return;
}


