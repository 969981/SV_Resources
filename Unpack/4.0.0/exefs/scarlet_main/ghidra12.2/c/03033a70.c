/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03033a70; name: _INIT_664
 */


void _INIT_664(void)

{
  if ((DAT_04871820 & 1) == 0) {
    DAT_04871810 = 0;
    DAT_04871818 = 0;
    DAT_04871800 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04871800;
    DAT_04871808 = &DAT_04641eb0;
    DAT_04871820 = 1;
  }
  return;
}


