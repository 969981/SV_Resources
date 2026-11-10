/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032d00; name: _INIT_621
 */


void _INIT_621(void)

{
  if ((DAT_04871168 & 1) == 0) {
    DAT_04871158 = 0;
    DAT_04871160 = 0;
    DAT_04871148 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871148;
    DAT_04871150 = &DAT_0463f798;
    DAT_04871168 = 1;
  }
  return;
}


