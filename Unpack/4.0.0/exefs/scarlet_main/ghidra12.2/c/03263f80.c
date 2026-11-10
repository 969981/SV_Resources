/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263f80; name: _INIT_1813
 */


void _INIT_1813(void)

{
  if ((DAT_04889b10 & 1) == 0) {
    DAT_04889b00 = 0;
    DAT_04889b08 = 0;
    DAT_04889af0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889af0;
    DAT_04889af8 = &DAT_046c3460;
    DAT_04889b10 = 1;
  }
  return;
}


