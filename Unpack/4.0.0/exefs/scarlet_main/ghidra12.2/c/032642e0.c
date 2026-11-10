/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 032642e0; name: _INIT_1824
 */


void _INIT_1824(void)

{
  if ((DAT_04889cb8 & 1) == 0) {
    DAT_04889ca8 = 0;
    DAT_04889cb0 = 0;
    DAT_04889c98 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889c98;
    DAT_04889ca0 = &DAT_046c40d0;
    DAT_04889cb8 = 1;
  }
  return;
}


