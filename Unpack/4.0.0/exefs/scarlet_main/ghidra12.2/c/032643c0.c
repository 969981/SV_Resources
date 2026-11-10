/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032643c0; name: _INIT_1827
 */


void _INIT_1827(void)

{
  if ((DAT_04889d20 & 1) == 0) {
    DAT_04889d10 = 0;
    DAT_04889d18 = 0;
    DAT_04889d00 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889d00;
    DAT_04889d08 = &DAT_046c42e8;
    DAT_04889d20 = 1;
  }
  return;
}


