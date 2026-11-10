/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030341f0; name: _INIT_688
 */


void _INIT_688(void)

{
  if ((DAT_04871be0 & 1) == 0) {
    DAT_04871bd0 = 0;
    DAT_04871bd8 = 0;
    DAT_04871bc0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871bc0;
    DAT_04871bc8 = &DAT_04643508;
    DAT_04871be0 = 1;
  }
  return;
}


