/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264160; name: _INIT_1819
 */


void _INIT_1819(void)

{
  if ((DAT_04889c00 & 1) == 0) {
    DAT_04889bf0 = 0;
    DAT_04889bf8 = 0;
    DAT_04889be0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889be0;
    DAT_04889be8 = &DAT_046c3b90;
    DAT_04889c00 = 1;
  }
  return;
}


