/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030343d0; name: _INIT_694
 */


void _INIT_694(void)

{
  if ((DAT_04871cd0 & 1) == 0) {
    DAT_04871cc0 = 0;
    DAT_04871cc8 = 0;
    DAT_04871cb0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871cb0;
    DAT_04871cb8 = &DAT_04643a88;
    DAT_04871cd0 = 1;
  }
  return;
}


