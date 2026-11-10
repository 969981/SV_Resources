/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030347e0; name: _INIT_707
 */


void _INIT_707(void)

{
  if ((DAT_04871ed8 & 1) == 0) {
    DAT_04871ec8 = 0;
    DAT_04871ed0 = 0;
    DAT_04871eb8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871eb8;
    DAT_04871ec0 = &DAT_04644748;
    DAT_04871ed8 = 1;
  }
  return;
}


