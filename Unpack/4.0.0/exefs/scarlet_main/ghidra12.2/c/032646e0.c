/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032646e0; name: _INIT_1837
 */


void _INIT_1837(void)

{
  if ((DAT_04889eb0 & 1) == 0) {
    DAT_04889ea0 = 0;
    DAT_04889ea8 = 0;
    DAT_04889e90 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889e90;
    DAT_04889e98 = &DAT_046c4e08;
    DAT_04889eb0 = 1;
  }
  return;
}


