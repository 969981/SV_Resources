/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263cc0; name: _INIT_1804
 */


void _INIT_1804(void)

{
  if ((DAT_048899b8 & 1) == 0) {
    DAT_048899a8 = 0;
    DAT_048899b0 = 0;
    DAT_04889998 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889998;
    DAT_048899a0 = &DAT_046c2bc8;
    DAT_048899b8 = 1;
  }
  return;
}


