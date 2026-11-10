/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263bd0; name: _INIT_1801
 */


void _INIT_1801(void)

{
  if ((DAT_04889940 & 1) == 0) {
    DAT_04889930 = 0;
    DAT_04889938 = 0;
    DAT_04889920 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889920;
    DAT_04889928 = &DAT_046c28e0;
    DAT_04889940 = 1;
  }
  return;
}


