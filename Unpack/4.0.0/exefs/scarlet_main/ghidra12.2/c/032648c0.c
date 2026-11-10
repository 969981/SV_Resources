/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032648c0; name: _INIT_1843
 */


void _INIT_1843(void)

{
  if ((DAT_04889fa0 & 1) == 0) {
    DAT_04889f90 = 0;
    DAT_04889f98 = 0;
    DAT_04889f80 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889f80;
    DAT_04889f88 = &DAT_046c53c0;
    DAT_04889fa0 = 1;
  }
  return;
}


