/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0324a5f0; name: _INIT_1721
 */


void _INIT_1721(void)

{
  if ((DAT_048882e0 & 1) == 0) {
    DAT_048882d0 = 0;
    DAT_048882d8 = 0;
    DAT_048882c0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048882c0;
    DAT_048882c8 = &DAT_046b9d18;
    DAT_048882e0 = 1;
  }
  return;
}


