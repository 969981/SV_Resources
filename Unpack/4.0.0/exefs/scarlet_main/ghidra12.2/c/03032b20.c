/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03032b20; name: _INIT_615
 */


void _INIT_615(void)

{
  if ((DAT_04871078 & 1) == 0) {
    DAT_04871068 = 0;
    DAT_04871070 = 0;
    DAT_04871058 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871058;
    DAT_04871060 = &DAT_0463f198;
    DAT_04871078 = 1;
  }
  return;
}


