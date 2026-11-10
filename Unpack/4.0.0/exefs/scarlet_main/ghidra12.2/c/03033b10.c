/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033b10; name: _INIT_666
 */


void _INIT_666(void)

{
  if ((DAT_04871870 & 1) == 0) {
    DAT_04871860 = 0;
    DAT_04871868 = 0;
    DAT_04871850 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871850;
    DAT_04871858 = &DAT_046420a0;
    DAT_04871870 = 1;
  }
  return;
}


