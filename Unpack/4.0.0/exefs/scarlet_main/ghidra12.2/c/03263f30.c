/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263f30; name: _INIT_1812
 */


void _INIT_1812(void)

{
  if ((DAT_04889ae8 & 1) == 0) {
    DAT_04889ad8 = 0;
    DAT_04889ae0 = 0;
    DAT_04889ac8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889ac8;
    DAT_04889ad0 = &DAT_046c3310;
    DAT_04889ae8 = 1;
  }
  return;
}


