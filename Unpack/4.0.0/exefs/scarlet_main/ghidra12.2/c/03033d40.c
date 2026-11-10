/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033d40; name: _INIT_673
 */


void _INIT_673(void)

{
  if ((DAT_04871988 & 1) == 0) {
    DAT_04871978 = 0;
    DAT_04871980 = 0;
    DAT_04871968 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871968;
    DAT_04871970 = &DAT_046426d0;
    DAT_04871988 = 1;
  }
  return;
}


