/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031485a0; name: _INIT_960
 */


void _INIT_960(void)

{
  if ((DAT_048777c0 & 1) == 0) {
    DAT_048777b0 = 0;
    DAT_048777b8 = 0;
    DAT_048777a0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048777a0;
    DAT_048777a8 = &DAT_0466e820;
    DAT_048777c0 = 1;
  }
  return;
}


