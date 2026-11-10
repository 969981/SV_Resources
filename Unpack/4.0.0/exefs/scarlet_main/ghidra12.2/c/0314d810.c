/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d810; name: _INIT_1159
 */


void _INIT_1159(void)

{
  if ((DAT_048796d8 & 1) == 0) {
    DAT_048796c8 = 0;
    DAT_048796d0 = 0;
    DAT_048796b8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048796b8;
    DAT_048796c0 = &DAT_0467a898;
    DAT_048796d8 = 1;
  }
  return;
}


