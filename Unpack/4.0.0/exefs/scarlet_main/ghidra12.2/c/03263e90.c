/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263e90; name: _INIT_1810
 */


void _INIT_1810(void)

{
  if ((DAT_04889a98 & 1) == 0) {
    DAT_04889a88 = 0;
    DAT_04889a90 = 0;
    DAT_04889a78 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889a78;
    DAT_04889a80 = &DAT_046c3118;
    DAT_04889a98 = 1;
  }
  return;
}


