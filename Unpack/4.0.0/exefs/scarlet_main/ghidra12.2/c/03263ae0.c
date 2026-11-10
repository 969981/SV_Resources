/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03263ae0; name: _INIT_1798
 */


void _INIT_1798(void)

{
  if ((DAT_048898c8 & 1) == 0) {
    DAT_048898b8 = 0;
    DAT_048898c0 = 0;
    DAT_048898a8 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048898a8;
    DAT_048898b0 = &DAT_046c25f8;
    DAT_048898c8 = 1;
  }
  return;
}


