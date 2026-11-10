/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b757e0; name: _INIT_405
 */


void _INIT_405(void)

{
  if ((DAT_048425e8 & 1) == 0) {
    DAT_048425d8 = 0;
    DAT_048425e0 = 0;
    DAT_048425c8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048425c8;
    DAT_048425d0 = &DAT_045aabf0;
    DAT_048425e8 = 1;
  }
  return;
}


