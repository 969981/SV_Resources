/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264250; name: _INIT_1822
 */


void _INIT_1822(void)

{
  if ((DAT_04889c78 & 1) == 0) {
    DAT_04889c68 = 0;
    DAT_04889c70 = 0;
    DAT_04889c58 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889c58;
    DAT_04889c60 = &DAT_046c3f80;
    DAT_04889c78 = 1;
  }
  return;
}


