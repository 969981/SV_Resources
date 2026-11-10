/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0314de00; name: _INIT_1178
 */


void _INIT_1178(void)

{
  if ((DAT_048799d0 & 1) == 0) {
    DAT_048799c0 = 0;
    DAT_048799c8 = 0;
    DAT_048799b0 = *(ulong *)PTR_DAT_047d3888 & 0xfffffffffffffffc;
    *(ulong **)PTR_DAT_047d3888 = &DAT_048799b0;
    DAT_048799b8 = &DAT_0467bb40;
    DAT_048799d0 = 1;
  }
  return;
}


