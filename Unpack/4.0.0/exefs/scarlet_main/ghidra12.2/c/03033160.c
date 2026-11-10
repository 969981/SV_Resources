/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033160; name: _INIT_635
 */


void _INIT_635(void)

{
  if ((DAT_04871398 & 1) == 0) {
    DAT_04871388 = 0;
    DAT_04871390 = 0;
    DAT_04871378 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871378;
    DAT_04871380 = &DAT_04640440;
    DAT_04871398 = 1;
  }
  return;
}


