/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03264020; name: _INIT_1815
 */


void _INIT_1815(void)

{
  if ((DAT_04889b60 & 1) == 0) {
    DAT_04889b50 = 0;
    DAT_04889b58 = 0;
    DAT_04889b40 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_04889b40;
    DAT_04889b48 = &DAT_046c36f8;
    DAT_04889b60 = 1;
  }
  return;
}


