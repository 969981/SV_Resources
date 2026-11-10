/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032645f0; name: _INIT_1834
 */


void _INIT_1834(void)

{
  if ((DAT_04889e38 & 1) == 0) {
    DAT_04889e28 = 0;
    DAT_04889e30 = 0;
    DAT_04889e18 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889e18;
    DAT_04889e20 = &DAT_046c4ac8;
    DAT_04889e38 = 1;
  }
  return;
}


