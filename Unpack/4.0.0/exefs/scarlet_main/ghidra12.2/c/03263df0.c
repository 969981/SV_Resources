/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263df0; name: _INIT_1808
 */


void _INIT_1808(void)

{
  if ((DAT_04889a48 & 1) == 0) {
    DAT_04889a38 = 0;
    DAT_04889a40 = 0;
    DAT_04889a28 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889a28;
    DAT_04889a30 = &DAT_046c2e70;
    DAT_04889a48 = 1;
  }
  return;
}


