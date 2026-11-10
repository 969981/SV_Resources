/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264110; name: _INIT_1818
 */


void _INIT_1818(void)

{
  if ((DAT_04889bd8 & 1) == 0) {
    DAT_04889bc8 = 0;
    DAT_04889bd0 = 0;
    DAT_04889bb8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889bb8;
    DAT_04889bc0 = &DAT_046c3a40;
    DAT_04889bd8 = 1;
  }
  return;
}


