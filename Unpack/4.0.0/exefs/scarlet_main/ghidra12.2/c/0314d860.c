/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314d860; name: _INIT_1160
 */


void _INIT_1160(void)

{
  if ((DAT_04879700 & 1) == 0) {
    DAT_048796f0 = 0;
    DAT_048796f8 = 0;
    DAT_048796e0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048796e0;
    DAT_048796e8 = &DAT_0467a990;
    DAT_04879700 = 1;
  }
  return;
}


