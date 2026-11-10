/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03034420; name: _INIT_695
 */


void _INIT_695(void)

{
  if ((DAT_04871cf8 & 1) == 0) {
    DAT_04871ce8 = 0;
    DAT_04871cf0 = 0;
    DAT_04871cd8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871cd8;
    DAT_04871ce0 = &DAT_04643ca0;
    DAT_04871cf8 = 1;
  }
  return;
}


